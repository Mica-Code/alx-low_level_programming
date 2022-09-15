#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: height of the triangle
 * return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
