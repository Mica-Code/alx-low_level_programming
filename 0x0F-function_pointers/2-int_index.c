#include "function_pointers.h"

/**
 *int_index - a function that searches for a integer
 *@array: an array to search in an integer
 *@size: the size of the array
 *@cmp: a pointer to the comparing function
 *
 *Return: index of the first element for which
 *the cmp function does not return 0, or -1 if no match found
 *or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
