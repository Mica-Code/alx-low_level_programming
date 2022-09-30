#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print multiplication of two integers
 *@argc: arguments count
 *@argv: arguments vector
 *Return: 0 upon success or 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
	}

	printf("Error\n");
	return (1);
}
