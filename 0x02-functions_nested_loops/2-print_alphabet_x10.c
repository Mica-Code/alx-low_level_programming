#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  *  *  * print_alphabet_x10 - function that prints 10 times alphabet
 *
 *   *
 *
 *    *   *
 *
 *     *
 *
 *      *    *   *
 *
 *       *
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

void print_alphabet_x10(void)
{
	int num = 1;

	while (num < 11)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		num ++;
		putchar('\n');	
	}
}
