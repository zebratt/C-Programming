/*
 * Answer-2:
 *   char, 6_01, A$ are not valid variables. 
 *
 * Answer 3- A. 0x10.5 - Decimals are not permitted in hexadecimal constants.
 *   B. 0X0G1 - G is not an acceptable hexadecimal character. (A-F only)
 *   C. 98.7U - Unsigned variable must be an integer (no decimals)
 *   D. 17777s - There is no "s" variable definer suffix. (u, l, f are acceptable)
 *   E. 0996 - Beginning 0 signifies octal constant value, 9 is not within acceptable range (0-7).
 *   F. 1.2Fe-7 - F does not belong in expression.
 *   G. 15,000 - the comma seperates 15 and 000.  (15000 is proper expression)
 */

// Answer 4:
#include <stdio.h>

int main()
{
    float C;
    int F = 27;

    C = (F - 32) / 1.8;
    printf("%i degrees F = %f degrees C\n", F, C);

    return 0;
}
