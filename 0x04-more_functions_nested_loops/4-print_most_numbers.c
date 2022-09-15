#include "main.h"

/**
 * print_most_numbers - a function that prints numbers from 0 to 9
 * except 2 and 4
 * folowed by a new line
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
    		{
			continue;
    		}
		_putchar(a);
	}
	_putchar('\n');
}
