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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e')
		{
			ch = 'f';
			continue;
		}

		else if (ch == 'q')
		{
			ch = 'r';
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
