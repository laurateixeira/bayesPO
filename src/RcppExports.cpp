// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// runBayesPO
Rcpp::List runBayesPO(Eigen::VectorXd beta, Eigen::VectorXd delta, double lambda, Rcpp::String b_updater, Rcpp::String d_updater, Rcpp::String l_updater, Rcpp::List parB, Rcpp::List parD, Rcpp::List parL, Rcpp::String covsClass, SEXP covariates, double areaD, Rcpp::String xClass, Eigen::MatrixXd xValues, Eigen::VectorXi intensityCovs, Eigen::VectorXi observabilityCovs, Eigen::VectorXi xIntensityCovs, Eigen::VectorXi xObservabilityCovs, int burnin, int thin, int iter, int threads);
RcppExport SEXP _bayesPO_runBayesPO(SEXP betaSEXP, SEXP deltaSEXP, SEXP lambdaSEXP, SEXP b_updaterSEXP, SEXP d_updaterSEXP, SEXP l_updaterSEXP, SEXP parBSEXP, SEXP parDSEXP, SEXP parLSEXP, SEXP covsClassSEXP, SEXP covariatesSEXP, SEXP areaDSEXP, SEXP xClassSEXP, SEXP xValuesSEXP, SEXP intensityCovsSEXP, SEXP observabilityCovsSEXP, SEXP xIntensityCovsSEXP, SEXP xObservabilityCovsSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP iterSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type b_updater(b_updaterSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type d_updater(d_updaterSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type l_updater(l_updaterSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type parB(parBSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type parD(parDSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type parL(parLSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type covsClass(covsClassSEXP);
    Rcpp::traits::input_parameter< SEXP >::type covariates(covariatesSEXP);
    Rcpp::traits::input_parameter< double >::type areaD(areaDSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type xClass(xClassSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type xValues(xValuesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type intensityCovs(intensityCovsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type observabilityCovs(observabilityCovsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type xIntensityCovs(xIntensityCovsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type xObservabilityCovs(xObservabilityCovsSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(runBayesPO(beta, delta, lambda, b_updater, d_updater, l_updater, parB, parD, parL, covsClass, covariates, areaD, xClass, xValues, intensityCovs, observabilityCovs, xIntensityCovs, xObservabilityCovs, burnin, thin, iter, threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesPO_runBayesPO", (DL_FUNC) &_bayesPO_runBayesPO, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesPO(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
