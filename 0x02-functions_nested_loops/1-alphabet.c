#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  *  *  * print_alphabet - a function that prints the alphabet, in lowercase
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

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
