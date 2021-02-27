// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cartesian_to_polar_rcpp
NumericMatrix cartesian_to_polar_rcpp(NumericMatrix cartesian, NumericVector anchor, int threads);
RcppExport SEXP _rTLS_cartesian_to_polar_rcpp(SEXP cartesianSEXP, SEXP anchorSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type cartesian(cartesianSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type anchor(anchorSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cartesian_to_polar_rcpp(cartesian, anchor, threads));
    return rcpp_result_gen;
END_RCPP
}
// circleRANSAC_rcpp
arma::mat circleRANSAC_rcpp(arma::mat cloud, double fpoints, double z_value, arma::vec poutlier, int max_iterations, int threads);
RcppExport SEXP _rTLS_circleRANSAC_rcpp(SEXP cloudSEXP, SEXP fpointsSEXP, SEXP z_valueSEXP, SEXP poutlierSEXP, SEXP max_iterationsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type cloud(cloudSEXP);
    Rcpp::traits::input_parameter< double >::type fpoints(fpointsSEXP);
    Rcpp::traits::input_parameter< double >::type z_value(z_valueSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type poutlier(poutlierSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(circleRANSAC_rcpp(cloud, fpoints, z_value, poutlier, max_iterations, threads));
    return rcpp_result_gen;
END_RCPP
}
// dimensionality_sphere_rcpp
arma::cube dimensionality_sphere_rcpp(arma::mat amat, arma::mat bmat, arma::vec radius, int threads, bool progress);
RcppExport SEXP _rTLS_dimensionality_sphere_rcpp(SEXP amatSEXP, SEXP bmatSEXP, SEXP radiusSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type amat(amatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type bmat(bmatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(dimensionality_sphere_rcpp(amat, bmat, radius, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// euclidean_rcpp
Rcpp::NumericVector euclidean_rcpp(Rcpp::NumericVector sample, Rcpp::NumericMatrix base, int threads);
RcppExport SEXP _rTLS_euclidean_rcpp(SEXP sampleSEXP, SEXP baseSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type base(baseSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(euclidean_rcpp(sample, base, threads));
    return rcpp_result_gen;
END_RCPP
}
// features_knn_rcpp
arma::cube features_knn_rcpp(arma::mat index, arma::mat query, arma::vec k, int threads, bool progress);
RcppExport SEXP _rTLS_features_knn_rcpp(SEXP indexSEXP, SEXP querySEXP, SEXP kSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type index(indexSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type query(querySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(features_knn_rcpp(index, query, k, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// knn_rcpp
arma::mat knn_rcpp(arma::mat query, arma::mat ref, int k, bool same, std::string build, int threads, int checks);
RcppExport SEXP _rTLS_knn_rcpp(SEXP querySEXP, SEXP refSEXP, SEXP kSEXP, SEXP sameSEXP, SEXP buildSEXP, SEXP threadsSEXP, SEXP checksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type query(querySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ref(refSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type same(sameSEXP);
    Rcpp::traits::input_parameter< std::string >::type build(buildSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< int >::type checks(checksSEXP);
    rcpp_result_gen = Rcpp::wrap(knn_rcpp(query, ref, k, same, build, threads, checks));
    return rcpp_result_gen;
END_RCPP
}
// line_AABB_rcpp
arma::vec line_AABB_rcpp(arma::mat orig, arma::mat end, arma::vec AABB_min, arma::vec AABB_max);
RcppExport SEXP _rTLS_line_AABB_rcpp(SEXP origSEXP, SEXP endSEXP, SEXP AABB_minSEXP, SEXP AABB_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type orig(origSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type end(endSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type AABB_min(AABB_minSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type AABB_max(AABB_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(line_AABB_rcpp(orig, end, AABB_min, AABB_max));
    return rcpp_result_gen;
END_RCPP
}
// lines_interception_rcpp
arma::mat lines_interception_rcpp(arma::mat orig, arma::mat end, arma::mat voxels, arma::vec edge_length, int threads, bool progress);
RcppExport SEXP _rTLS_lines_interception_rcpp(SEXP origSEXP, SEXP endSEXP, SEXP voxelsSEXP, SEXP edge_lengthSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type orig(origSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type end(endSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type voxels(voxelsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type edge_length(edge_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(lines_interception_rcpp(orig, end, voxels, edge_length, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// meanDis_knn_rcpp
arma::vec meanDis_knn_rcpp(arma::mat amat, int k, int threads, bool progress);
RcppExport SEXP _rTLS_meanDis_knn_rcpp(SEXP amatSEXP, SEXP kSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type amat(amatSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(meanDis_knn_rcpp(amat, k, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// nneighbors_sphere_rcpp
arma::vec nneighbors_sphere_rcpp(arma::mat amat, double radius, int threads, bool progress);
RcppExport SEXP _rTLS_nneighbors_sphere_rcpp(SEXP amatSEXP, SEXP radiusSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type amat(amatSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(nneighbors_sphere_rcpp(amat, radius, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// polar_to_cartesian_rcpp
NumericMatrix polar_to_cartesian_rcpp(NumericMatrix polar, int threads);
RcppExport SEXP _rTLS_polar_to_cartesian_rcpp(SEXP polarSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type polar(polarSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(polar_to_cartesian_rcpp(polar, threads));
    return rcpp_result_gen;
END_RCPP
}
// radius_search_rcpp
arma::mat radius_search_rcpp(arma::mat query, arma::mat ref, double radius, int max_neighbour, bool same, std::string build, int threads, int checks);
RcppExport SEXP _rTLS_radius_search_rcpp(SEXP querySEXP, SEXP refSEXP, SEXP radiusSEXP, SEXP max_neighbourSEXP, SEXP sameSEXP, SEXP buildSEXP, SEXP threadsSEXP, SEXP checksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type query(querySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ref(refSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type max_neighbour(max_neighbourSEXP);
    Rcpp::traits::input_parameter< bool >::type same(sameSEXP);
    Rcpp::traits::input_parameter< std::string >::type build(buildSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< int >::type checks(checksSEXP);
    rcpp_result_gen = Rcpp::wrap(radius_search_rcpp(query, ref, radius, max_neighbour, same, build, threads, checks));
    return rcpp_result_gen;
END_RCPP
}
// rotate2D_rcpp
NumericMatrix rotate2D_rcpp(NumericMatrix plane, NumericVector angle, int threads);
RcppExport SEXP _rTLS_rotate2D_rcpp(SEXP planeSEXP, SEXP angleSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type plane(planeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate2D_rcpp(plane, angle, threads));
    return rcpp_result_gen;
END_RCPP
}
// rotate3D_rcpp
NumericMatrix rotate3D_rcpp(NumericMatrix cloud, NumericVector roll, NumericVector pitch, NumericVector yaw, int threads);
RcppExport SEXP _rTLS_rotate3D_rcpp(SEXP cloudSEXP, SEXP rollSEXP, SEXP pitchSEXP, SEXP yawSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type cloud(cloudSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type roll(rollSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pitch(pitchSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yaw(yawSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate3D_rcpp(cloud, roll, pitch, yaw, threads));
    return rcpp_result_gen;
END_RCPP
}
// sphere_covering_rcpp
arma::mat sphere_covering_rcpp(arma::mat amat, double radius, double kmax, int threads, bool progress);
RcppExport SEXP _rTLS_sphere_covering_rcpp(SEXP amatSEXP, SEXP radiusSEXP, SEXP kmaxSEXP, SEXP threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type amat(amatSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type kmax(kmaxSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(sphere_covering_rcpp(amat, radius, kmax, threads, progress));
    return rcpp_result_gen;
END_RCPP
}
// voxelization_rcpp
arma::mat voxelization_rcpp(arma::mat cloud, arma::vec edge_length, int threads);
RcppExport SEXP _rTLS_voxelization_rcpp(SEXP cloudSEXP, SEXP edge_lengthSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type cloud(cloudSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type edge_length(edge_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(voxelization_rcpp(cloud, edge_length, threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rTLS_cartesian_to_polar_rcpp", (DL_FUNC) &_rTLS_cartesian_to_polar_rcpp, 3},
    {"_rTLS_circleRANSAC_rcpp", (DL_FUNC) &_rTLS_circleRANSAC_rcpp, 6},
    {"_rTLS_dimensionality_sphere_rcpp", (DL_FUNC) &_rTLS_dimensionality_sphere_rcpp, 5},
    {"_rTLS_euclidean_rcpp", (DL_FUNC) &_rTLS_euclidean_rcpp, 3},
    {"_rTLS_features_knn_rcpp", (DL_FUNC) &_rTLS_features_knn_rcpp, 5},
    {"_rTLS_knn_rcpp", (DL_FUNC) &_rTLS_knn_rcpp, 7},
    {"_rTLS_line_AABB_rcpp", (DL_FUNC) &_rTLS_line_AABB_rcpp, 4},
    {"_rTLS_lines_interception_rcpp", (DL_FUNC) &_rTLS_lines_interception_rcpp, 6},
    {"_rTLS_meanDis_knn_rcpp", (DL_FUNC) &_rTLS_meanDis_knn_rcpp, 4},
    {"_rTLS_nneighbors_sphere_rcpp", (DL_FUNC) &_rTLS_nneighbors_sphere_rcpp, 4},
    {"_rTLS_polar_to_cartesian_rcpp", (DL_FUNC) &_rTLS_polar_to_cartesian_rcpp, 2},
    {"_rTLS_radius_search_rcpp", (DL_FUNC) &_rTLS_radius_search_rcpp, 8},
    {"_rTLS_rotate2D_rcpp", (DL_FUNC) &_rTLS_rotate2D_rcpp, 3},
    {"_rTLS_rotate3D_rcpp", (DL_FUNC) &_rTLS_rotate3D_rcpp, 5},
    {"_rTLS_sphere_covering_rcpp", (DL_FUNC) &_rTLS_sphere_covering_rcpp, 5},
    {"_rTLS_voxelization_rcpp", (DL_FUNC) &_rTLS_voxelization_rcpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rTLS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
