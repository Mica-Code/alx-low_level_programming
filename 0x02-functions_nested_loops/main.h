#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void print_alphabet(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	
	putchar('\n');
	return;
}
