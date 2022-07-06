#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]] 
double fonction_sucree(NumericVector x, NumericVector y) {
  NumericVector z = 3*x + y;
  if( is_true(any(x > 1)) )
    z = z*2;
  return sum(ifelse(z > 0, z, y));
} 
