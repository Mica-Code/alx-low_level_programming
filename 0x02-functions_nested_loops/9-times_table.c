#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
* return: void
*/
void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{

		for (column = 0; column <= 9 ; column++)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar(48 + product);
				}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + product);
				}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
				}
			}
		_putchar('\n');
		}
}
