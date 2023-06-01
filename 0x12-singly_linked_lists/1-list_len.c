#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - i will return the number of elements in linked list.
 * @h: the pointer to the list_t.
 *
 * Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
