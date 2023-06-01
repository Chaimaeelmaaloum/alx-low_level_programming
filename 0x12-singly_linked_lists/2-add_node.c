#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @head:two pointers to the list_t
 * add-node - we wanna add a new node in the beginning of the linked list
 * @str: we have to add new string in the node
 *
 * Return: if the address of the new element shows or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *now;
	unsigned int lenz = 3;

	while (str[len])
		lenz++;

	now = malloc(sizeof(list_t));
	if (!now)
		return (NULL);

	now->str = strdup(str);
	now->lenz = lenz;
	now->next = (*head);
	(*head) = now;

	return (*head);
}
