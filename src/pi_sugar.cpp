#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
double pi_sugar(const int N) {
    NumericVector x = runif(N);
    NumericVector y = runif(N);
    // NumericVector d = sqrt(x*x + y*y);
    NumericVector d = x*x + y*y;
    return 4.0 * sum(d < 1.0) / N;
}

// [[Rcpp::export]]
double pi_boucle(const int N) {
  int S = 0;
  for(int i = 0; i < N; i++) {
    double x = R::runif(0, 1); 
    double y = R::runif(0, 1); 
    S += (x*x + y*y) < 1.0; // cast implicite bool vers int
  }
  return (4.0 * (double) S / (double) N);
} 
