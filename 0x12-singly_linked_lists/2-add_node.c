#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - we will add a new node in the beginning of the linked list
 *
 * @str: new string will be added in the node.
 * @h: we have two pointer at the list_t
 * Return: will be the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*h);
	(*h) = new;

	return (*h);
}
