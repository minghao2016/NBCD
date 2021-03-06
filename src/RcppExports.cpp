// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clear_mem
void clear_mem();
RcppExport SEXP NBCD_clear_mem() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    clear_mem();
    return R_NilValue;
END_RCPP
}
// get_mem
std::map<int, double> get_mem();
RcppExport SEXP NBCD_get_mem() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_mem());
    return rcpp_result_gen;
END_RCPP
}
// kMcpp
double kMcpp(NumericVector p, NumericVector p1, NumericVector p2, IntegerVector i1, int imem);
RcppExport SEXP NBCD_kMcpp(SEXP pSEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP i1SEXP, SEXP imemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i1(i1SEXP);
    Rcpp::traits::input_parameter< int >::type imem(imemSEXP);
    rcpp_result_gen = Rcpp::wrap(kMcpp(p, p1, p2, i1, imem));
    return rcpp_result_gen;
END_RCPP
}
