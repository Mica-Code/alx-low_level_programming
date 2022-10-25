#include "lists.h"

/**
 *print_listint - a function that print all the elemets of a linked list
 *@h: a linked list of type listint_t to print
 *
 *Return: numer of nodes
 */
size_t print_listint(const listint_t *h)
{	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
