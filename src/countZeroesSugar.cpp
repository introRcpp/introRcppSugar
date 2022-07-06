#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
int countZeroesSugar(IntegerVector x) {
  return sum(x == 0);
} 
