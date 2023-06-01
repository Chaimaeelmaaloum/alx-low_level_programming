#include <stdlib.h>
#include "lists.h"

/**
 * list_len 
 * @l: pointer to the list_t list
 *
 * Return: number of elements in l
 */
size_t list_len(const list_t *l)
{
	size_t a = 0;

	while (l)
	{
		n++;
		l = l->next;
	}
	return (a);
}
