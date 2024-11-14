/** lab32-1.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 32
* ===========================================================  */

#include "lab32functs.h"

int main() {

    // For this exercise you will write a tail recursive version of factorial(),
    // called tail_factorial(), your function should take 2 integer parameters, the
    // first is the input value, the second is an accumulator.

    // Write your own code to test the base and recursive cases of tail_factorial()
    // to determine that it is working correctly.
    int n;
    
    // Ask the user for the number to compute the factorial
    printf("Enter a number to find the factorial: ");
    scanf("%d", &n);
    
    // Call the factorial function and print the result
    printf("Factorial of %d is %d\n", n, factorial(n));
    
    return 0;

    
}
