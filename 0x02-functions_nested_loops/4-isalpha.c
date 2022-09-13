#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  *  *  * _isalpha - function that checks for alphabetic character.
 *
 *   *@c: single letter input
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

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
