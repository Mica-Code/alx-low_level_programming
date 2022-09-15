#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * positive_or_negative -check +ve or -ve numbers
 *
 * @n: input number
 *
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);


}
