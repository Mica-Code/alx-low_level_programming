#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - a function that prints a name
 *@name: a name of person to be printed
 *@f: pointer to a printing function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

