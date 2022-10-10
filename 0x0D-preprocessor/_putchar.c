#include <unistd.h>

/**
 *_putchar - a function that writes the character c to stdout
 *@c: a character to be printed
 *
 *Return: upon success it should return always 0
 *on error conditions, it should return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
