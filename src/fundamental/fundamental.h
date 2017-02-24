#ifndef FUNDAMENTAL_H
#define FUNDAMENTAL_H

#include "../structures/fraction.h"

/*
* Finds greatest common divisor
*/

int gcd(int a, int b);

/*
* Reduces a given fraction to lowest terms
*/

void to_lowest_terms(fraction *frac);

#endif