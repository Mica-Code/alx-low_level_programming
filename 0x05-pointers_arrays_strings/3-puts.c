#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: first parameter to be passed
 *
 * Return: nothin
 */


void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
