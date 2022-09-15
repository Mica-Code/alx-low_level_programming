#include "main.h"

/**
 * print_line - a function that  draws a straight line
 * @n:how many times line character will be prited
 * return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
