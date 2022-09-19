#include "main.h"

/**
 * swap_int - Swaps 2 integer values
 *
 * @a: first parameter to be passed
 * @b: second parameter to be passed
 *
 * Return: Nothing
 */


void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
