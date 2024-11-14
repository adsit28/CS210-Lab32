/** lab32-3.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 32
* ===========================================================  */

#include "lab32functs.h"

int main() {

    // The Collatz conjecture states that following a set of rules, you can reach 1
    // starting from any other number. While this conjecture has not been proven, you
    // will write a tail recursive function called collatz() that accepts two integer
    // input parameters (the first is the starting value, the second is the accumulator)
    // and returns the number of steps needed to reach 1 from the starting value.
    //
    // The rules of the Collatz conjecture are:
    //   if the current N is even, the next N = N/2
    //   if the current N is odd, the next N = 3*N + 1

    // Write your own code to test the base and recursive cases of collatz() to determine
    // that it is working correctly

    return 0;

    int startValue;
    
    // Ask the user for the starting number
    printf("Enter a number to start the Collatz sequence: ");
    scanf("%d", &startValue);
    
    // Call the Collatz function with the starting number and an initial step count of 0
    int steps = collatz(startValue, 0);
    
    // Print the result: the number of steps to reach 1
    printf("It took %d steps to reach 1 from %d.\n", steps, startValue);
    
    return 0;
}
