#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  *  *  * print_last_digit - function that prints the last digit of a number.
 *
 *   *@n: single letter input
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

int print_last_digit(int n)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');

	return (pld);
}
