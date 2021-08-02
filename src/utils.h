#include "covariates.h"
#include "markovchain.h"
#include <RcppEigen.h>

// Create the mcStep object to be updated. Requires the pointer to a retrievCovs
// variable
mcStep startup_mcmc(Eigen::VectorXd beta, Eigen::VectorXd delta, double lambda,
                    std::string b_updater, std::string d_updater,
                    std::string l_updater, Rcpp::List parB, Rcpp::List parD,
                    Rcpp::List parL, std::string xClass,
                    Eigen::MatrixXd xValues, Eigen::VectorXi xI,
                    Eigen::VectorXi xO, retrievCovs *covars, double aD);

// Formating x functions
void importX_double(Eigen::MatrixXd x, R_xlen_t nb, R_xlen_t nd,
                    Eigen::VectorXi xI, Eigen::VectorXi xO,
                    std::vector<R_xlen_t> &x_data, Eigen::MatrixXd &zx_data,
                    Eigen::MatrixXd &wx_data);
void importX_int(Eigen::MatrixXi x, R_xlen_t nb, R_xlen_t nd,
                 Eigen::VectorXi xI, Eigen::VectorXi xO,
                 std::vector<R_xlen_t> &x_data, Eigen::MatrixXd &zx_data,
                 Eigen::MatrixXd &wx_data);
void determineX(Eigen::VectorXd x, R_xlen_t nb, R_xlen_t nd,
                      retrievCovs *b,
                      std::vector<R_xlen_t> &x_data, Eigen::MatrixXd &zx_data,
                      Eigen::MatrixXd &wx_data);

// Sampling
Eigen::VectorXd sampleNormal(const Eigen::MatrixXd& Sigma);
