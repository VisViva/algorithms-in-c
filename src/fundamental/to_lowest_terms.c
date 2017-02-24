#include "fundamental.h"
#include "../structures/fraction.h"

void to_lowest_terms(fraction *frac) {
	int gcd_value = gcd(frac->numerator, frac->denominator);
	frac->numerator /= gcd_value;
	frac->denominator /= gcd_value;
}