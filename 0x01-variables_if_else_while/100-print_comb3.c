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
	/* your code goes there*/
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
