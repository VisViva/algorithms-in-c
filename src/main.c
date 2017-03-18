#include <stdio.h>

void gcd_demo() {
	#include "fundamental/fundamental.h"
	#include "structures/fraction.h"

	int x, y;

  	fraction frac = {.numerator = 1, .denominator = 1};

  	if (scanf("%d %d", &x, &y) != EOF)
  	{
    	frac.numerator = x;
    	frac.denominator = y;
    	to_lowest_terms(&frac);
    	if (x > 0 && y > 0)
    	{
      		printf("%d/%d => %d/%d\n", x, y, frac.numerator, frac.denominator);
    	}
  	}
}

void linked_list_demo(){
	#include "structures/linked_list_node.h"
	#include "data-structures/linked_list.h"

	initialize();
	append(10);
	append(15);
	append(20);
	printlist();
}

void main()
{
  	linked_list_demo();
}