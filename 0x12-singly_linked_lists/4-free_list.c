#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list -frees a list_t list
 * @str: string
 * @h: list_t to be freed
 * temp
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
