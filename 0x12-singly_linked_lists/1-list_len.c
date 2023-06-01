#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len 
 * @h: pointer to the list_t list
 * any
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (a);
}
