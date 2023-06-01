#include <stdio.h>
#include "lists.h"

/**
 * print_list : i will print all files of linked list
 * @h: list_t list be printed by poniter
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (s);
}
