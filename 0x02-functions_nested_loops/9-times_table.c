#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  *  *  * times_table - prints the 9 times table, starting with 0.
 *
 *   *
 *
 *    *   *
 *
 *     *
 *
 *      *    *   *
 *      *       *
 *
 *        *     *
 *
 *         *
 *
 *          *      *    * Return: Always 0 (Success)
 *
 *           *
 *
 *            *       *
 *
 *             *
 */

void times_table(void)
{
	int h, m;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar((h * m) + '0');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
