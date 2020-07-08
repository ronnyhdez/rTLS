#ifdef _OPENMP
#include <omp.h>
#endif
// [[Rcpp::plugins(openmp)]]
// [[Rcpp::depends(RcppArmadillo"]]
// [[Rcpp::depends(RcppProgress)]]
#include <RcppArmadillo.h>
#include <progress.hpp>
#include <progress_bar.hpp>

using arma::sqrt;
using arma::pow;
using arma::sum;
using arma::find;
using namespace arma;

// [[Rcpp::export]]
arma::cube dimensionality_sphere_rcpp(arma::mat amat, arma::mat bmat, arma::vec radius, int threads = 1, bool progress = true) {

#ifdef _OPENMP
  if ( threads > 0 ) {
    omp_set_num_threads( threads );
    REprintf("Number of threads=%i\n", omp_get_max_threads());
  }
#endif

  int an = amat.n_rows;
  int bn = bmat.n_rows;
  int len_radius = radius.n_elem;
  double max_radius = max(radius);

  arma::cube out(an, 4, len_radius);

  Progress p(an*len_radius, progress);

#pragma omp parallel for
  for (int i = 0; i < an; i++) {

    arma::vec distance(bn); //Empy vector for distances

    for (int j = 0; j < bn; j++) { //Loop to estimate the distance

      double dx = (bmat(j, 0) - amat(i, 0)); //Absolute values for diferences X

      if((dx > max_radius) || (dx < -max_radius)) {
        distance(j) = 0;

      } else {

        double dy = (bmat(j, 1) - amat(i, 1)); //Absolute values for diferences Y

        if((dy > max_radius) || (dy < -max_radius)) {
          distance(j) = 0;

        } else {

          double dz = abs(bmat(j, 2) - amat(i, 2)); //Absolute values for diferences Z

          if((dz > max_radius) || (dz < -max_radius)) {
            distance(j) = 0;

          } else {
            double euclidean = sqrt(pow(dx, 2.0) + pow(dy, 2.0) + pow(dz, 2.0));

            if(euclidean > max_radius) {
              distance(j) = 0;

            } else {
              distance(j) = euclidean;
            }
          }
        }
      }
    }


    for (int k = 0; k < len_radius; k++) {

      if (! Progress::check_abort() ) {
        p.increment(); // update progress
      }

      arma::mat basesub = bmat.rows(find(distance > 0 && distance <= radius[k]));

      if(basesub.n_rows > 2) {

        arma::mat covmat = arma::cov(basesub);

        arma::vec eigenvalues =  arma::eig_sym(covmat);

        double eigen_total =  sum(eigenvalues);

        out(i , 0, k) = basesub.n_rows; //neighboring points.
        out(i , 1, k) = eigenvalues[2]/eigen_total; //eigenvalue 1
        out(i , 2, k) = eigenvalues[1]/eigen_total; //eigenvalue 2
        out(i , 3, k) = eigenvalues[0]/eigen_total; //eigenvalue 3


      } else {

        out(i , 0, k) = basesub.n_rows;
        out(i , 1, k) = 0;
        out(i , 2, k) = 0;
        out(i , 3, k) = 0;

      }
    }
  }

  return out;
}
