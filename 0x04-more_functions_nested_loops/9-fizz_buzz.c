#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints number from 1 t0 100
 * but for multiples of 3, print Fiss
 * and print Buzz for multiples of 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i == 100)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
