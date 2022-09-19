#include "main.h"

/**
 * _strlen - retruns the length of a string
 *
 * @str: first parameter to be passed
 *
 * Return: integer
 */


int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}
