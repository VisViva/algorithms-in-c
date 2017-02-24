#include <stdio.h>
#include "fundamental/fundamental.h"

main() {
  int x, y;
  while (scanf("%d %d", &x, &y) != EOF)
    if (x > 0 && y > 0) printf("%d %d %d\n", x, y, gcd(x, y));
}