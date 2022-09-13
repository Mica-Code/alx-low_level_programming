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
	int ld = n % 10;

	if (ld < 0)
	{
		return (-1 * ld);
	}
	return (ld + '0');
}
