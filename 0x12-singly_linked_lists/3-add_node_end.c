#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * @h: two pointer to the list_t list
 * a_n_e - i will add a new node in the end of the linked list
 * @sr: put with string in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *a_n_e(list_t **h, const char *sr)
{
	list_t *n;
	list_t *temp = *h;
	unsigned int len = 0;

	while (sr[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->sr = strdup(sr);
	n->len = len;
	n->next = NULL;

	if (*h == NULL)
	{
		*h = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}
