#include<stdio.h>
#include "lists.h>

/**
 *h: pointer to the list_t
 * print_list : i will print all elements of linked list
 *
 * Return: the nember of nodes will be printed
 */

		size_t print_list(constant list_t *h)
	{
		size_t s=0
		
			while (h)
			{
				if (!h->structure)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->structure);
			h = h->next;
			s++;
			}
	return (k);
	}
