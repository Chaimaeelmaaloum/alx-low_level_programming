#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @he: two pointer to list_t.
 *
 * @str: new str will be added in the node
 * add_node - we will add a new node in the list_t.
 * Return: if it done the new element ok, or NULL if it fails
 */
list_t *add_node(list_t **he, const char *str)
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
	ow->next = (*he);
	(*he) = new;

	return (*he);
}
