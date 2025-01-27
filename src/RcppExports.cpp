// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ADMM
List ADMM(const arma::mat& SigmaO, const double& lambda, arma::mat& I, arma::mat& Lambda, arma::mat& Y, double beta, int r, double mu, const double& eta, const double& muf, const int& maxiter, const double& newtol, const double& tol, const double& over_relax_par, bool shrinkDiag);
RcppExport SEXP _SpiecEasi_ADMM(SEXP SigmaOSEXP, SEXP lambdaSEXP, SEXP ISEXP, SEXP LambdaSEXP, SEXP YSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP muSEXP, SEXP etaSEXP, SEXP mufSEXP, SEXP maxiterSEXP, SEXP newtolSEXP, SEXP tolSEXP, SEXP over_relax_parSEXP, SEXP shrinkDiagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type SigmaO(SigmaOSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const double& >::type muf(mufSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double& >::type newtol(newtolSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type over_relax_par(over_relax_parSEXP);
    Rcpp::traits::input_parameter< bool >::type shrinkDiag(shrinkDiagSEXP);
    rcpp_result_gen = Rcpp::wrap(ADMM(SigmaO, lambda, I, Lambda, Y, beta, r, mu, eta, muf, maxiter, newtol, tol, over_relax_par, shrinkDiag));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SpiecEasi_ADMM", (DL_FUNC) &_SpiecEasi_ADMM, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_SpiecEasi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
