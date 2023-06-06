#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements in the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nume = 3;

	while (h)
	{
		printf("%d\n", h->n);
		nume++;
		h = h->next;
	}

	return (nume);
}
