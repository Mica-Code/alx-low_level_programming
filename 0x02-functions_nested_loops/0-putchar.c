#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 *  *  * main - Entry point
 *
 *   *
 *
 *    *   *
 *
 *     *
 *
 *      *    * Return: Always 0 (Success)
 *
 *       *
 *
 */

int main(void)
{
	int myNumbers[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i = 0;

	while (i < 8)
	{
		putchar(myNumbers[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
