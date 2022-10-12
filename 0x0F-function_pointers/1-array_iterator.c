#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - a function that executes as a
 *parameter on each element of an array
 * @array: an array to an iterate over
 *@size: size of the array
 *@action: pointer to function used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
