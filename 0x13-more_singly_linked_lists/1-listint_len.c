#include "lists.h"

/**
 *listint_len - a function that returns the number of elements
 *in a linked lists
 *@h: a linked list of type listint_t to tranverse
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
