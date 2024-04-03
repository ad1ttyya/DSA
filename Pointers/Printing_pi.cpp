#include <iostream>
#include <mpfr.h>

using namespace std;

void calculatePi(int precision) {
    mpfr_set_default_prec(precision); // Set precision
    
    mpfr_t pi;
    mpfr_init(pi);
    
    mpfr_const_pi(pi, MPFR_RNDN); // Calculate π
    
    mpfr_printf("Pi to %d decimal places:\n%.1000Rf\n", precision, pi); // Print π
    
    mpfr_clear(pi);
}

int main() {
    int precision = 1000; // Number of decimal places
    calculatePi(precision);
    return 0;
}
