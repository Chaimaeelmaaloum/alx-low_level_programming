#include <stdio.h>
#include "lists.h"

/**
 * print_list - i will print all the elements of the linked list
 * @h: pointer to the list_t list who want  to be printed
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->structure)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->structure);
		h = h->next;
		s++;
	}

	return (s);
}
