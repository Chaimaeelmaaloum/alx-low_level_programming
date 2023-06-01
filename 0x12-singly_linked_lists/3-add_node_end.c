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
	list_t *n;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->length = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}
