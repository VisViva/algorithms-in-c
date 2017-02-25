#include <stdio.h>
#include "fundamental/fundamental.h"
#include "structures/fraction.h"

main() {
  int x, y;

  fraction frac = {.numerator = 1, .denominator = 1};

  if (scanf("%d %d", &x, &y) != EOF) {
    frac.numerator = x;
    frac.denominator = y;
    to_lowest_terms(&frac);
    if (x > 0 && y > 0)
      printf("%d/%d => %d/%d\n", x, y, frac.numerator, frac.denominator);
  }
}