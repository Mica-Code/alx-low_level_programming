#include "main.h"
#include <stdio.h>

/**
 * main - print all argument recieved
 * @argc: count arguments
 * @argv: arguments recieved
 * Return: Always 0 upon success
 */
int main(int argc, char *argv[])
{
	/* Declaring variables*/

	int count = 0;

	if (argc > 0)
	{
		/* WHILE - Print each argument*/
	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	}
	return (0);
}
