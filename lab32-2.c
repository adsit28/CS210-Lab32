/** lab32-2.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 32
* ===========================================================  */

#include "lab32functs.h"

int main() {

    // In nuclear physics, the halflife of a radio isotope represents the amount of time (in years) for the radioactivity
    // of an object (measured in rads) to decrease by half.  Write a function called calculateDecayDuration() that
    // uses tail recursion to calculate the # of years before a radioactive material becomes inert (i.e., < 1 rad).
    // Your function will have three parameters:
    //   1. The current rad measurement (an INTEGER)
    //   2. The number of years in a halflife (a double)
    //   3. An accumulator (a double)

    // Write your own code to test the base and recursive cases of calculateDecayDuration() to determine
    // that it is working correctly

int initialRadioactivity = 4; // Initial radioactivity in rads
    double halfLife = 30.0; // Half-life in years
    
    // Call the recursive function with initial radioactivity, half-life, and 0 for the accumulator
    double duration = calculateDecayDuration(initialRadioactivity, halfLife, 0.0);
    
    // Print the result
    printf("It will take %.2f years for the radioactivity to drop below 1 rad.\n", duration);
    
    return 0;
}
