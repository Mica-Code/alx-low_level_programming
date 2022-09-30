#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments passed
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
