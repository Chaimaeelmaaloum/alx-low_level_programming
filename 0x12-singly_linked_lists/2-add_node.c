#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - we will add a n node in the beginning of the linked list
 *
 * @str: n string will be added in the node.
 * @h: we have two pointer at the list_t
 * Return: will be the address of the n element, or NULL if it fails
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*h);
	(*h) = n;

	return (*h);
}
