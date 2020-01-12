// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// distanceC
NumericVector distanceC(double xcoor, double ycoor, double zcoor, NumericVector X, NumericVector Y, NumericVector Z);
RcppExport SEXP _rTLS_distanceC(SEXP xcoorSEXP, SEXP ycoorSEXP, SEXP zcoorSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type xcoor(xcoorSEXP);
    Rcpp::traits::input_parameter< double >::type ycoor(ycoorSEXP);
    Rcpp::traits::input_parameter< double >::type zcoor(zcoorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(distanceC(xcoor, ycoor, zcoor, X, Y, Z));
    return rcpp_result_gen;
END_RCPP
}
// move_rotate_rcpp
NumericMatrix move_rotate_rcpp(NumericMatrix cloud, NumericVector move, NumericVector angles);
RcppExport SEXP _rTLS_move_rotate_rcpp(SEXP cloudSEXP, SEXP moveSEXP, SEXP anglesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type cloud(cloudSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type move(moveSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type angles(anglesSEXP);
    rcpp_result_gen = Rcpp::wrap(move_rotate_rcpp(cloud, move, angles));
    return rcpp_result_gen;
END_RCPP
}
// polar_to_cartesian_rcpp
NumericMatrix polar_to_cartesian_rcpp(NumericMatrix polar);
RcppExport SEXP _rTLS_polar_to_cartesian_rcpp(SEXP polarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type polar(polarSEXP);
    rcpp_result_gen = Rcpp::wrap(polar_to_cartesian_rcpp(polar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rTLS_distanceC", (DL_FUNC) &_rTLS_distanceC, 6},
    {"_rTLS_move_rotate_rcpp", (DL_FUNC) &_rTLS_move_rotate_rcpp, 3},
    {"_rTLS_polar_to_cartesian_rcpp", (DL_FUNC) &_rTLS_polar_to_cartesian_rcpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rTLS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
