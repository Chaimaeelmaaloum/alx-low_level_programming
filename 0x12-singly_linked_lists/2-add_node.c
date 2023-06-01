#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a now node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: now string to add in the node
 *
 * Return: the address of the now element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *now;
	unsigned int len = 0;

	while (str[len])
		len++;

	now = malloc(sizeof(list_t));
	if (!now)
		return (NULL);

	now->str = strdup(str);
	now->len = len;
	ow->next = (*head);
	(*head) = now;

	return (*head);
}
