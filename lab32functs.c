/** lab32functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 32
* ===========================================================  */

#include "lab32functs.h"


int factorial(int N) {

    if (N < 2) {
        return 1;
    }

    return N * factorial(N-1);
}

int tail_factorial(int N, int accum) {
    if (N == 0){
        return accum;
    }

    return tail_factorial(N-1, accum * N);
}

double calculateDecayDuration(int N, double halflifeInYears, double accum) {
    
    if (N < 1) {
        return accum;
    }
    
    // Recursive case: Halve the radioactivity, add the half-life to the accumulator
    return calculateDecayDuration(N / 2, halflifeInYears, accum + halflifeInYears);
}

int collatz(int N, int accum) {

    // Base case: If N reaches 1, return the number of steps
    if (N == 1) {
        return accum;
    }
    
    // Recursive case: If N is even, divide it by 2, increment the step
    if (N % 2 == 0) {
        return collatz(N / 2, accum + 1);
    } 
    // If N is odd, multiply by 3 and add 1, increment the step
    else {
        return collatz(3 * N + 1, accum + 1);
    }
}