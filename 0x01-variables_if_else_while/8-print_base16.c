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
	char ch = '0';
	char zh = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (zh <= 'f')
	{
		putchar(zh);
		zh++;
	}
	putchar('\n');
	return (0);

}
