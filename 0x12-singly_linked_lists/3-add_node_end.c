#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**@h: two pointer to the list_t list
 * a_n_e : i will add a new node in the end of the linked list
 * @str: put with string in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *h;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
