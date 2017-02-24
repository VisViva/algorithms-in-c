#include "fundamental.h"

/**
* Euclid's algorithm (step-by-step method for calculating gcd) is based on the
* following simple fact.
*
* Suppose a > b. Then the gcd of a and b is the same as the gcd of b and the
* remainder of a when divided by b.
*
* gcd(a, b) = gcd(b, a % b)
*/

int gcd(int a, int b) {
  int temp;

  while (b != 0) {
    if (b > a) {
      temp = a;
      a = b;
      b = temp;
    }

    temp = a % b;
    a = b;
    b = temp;
  }

  return a;
}