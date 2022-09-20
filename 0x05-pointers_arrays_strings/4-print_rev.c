#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: string variable
 * return: void
 */

void print_rev(char *s)
{
	int lenght = 0;
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		lenght++;
		i++;
	}

	for (n = (lenght - 1); n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
