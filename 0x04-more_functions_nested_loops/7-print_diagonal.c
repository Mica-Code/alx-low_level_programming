#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: using n number of \ lines
 */

void print_diagonal(int n)
{
	if (n != 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
