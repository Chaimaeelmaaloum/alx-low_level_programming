#include<stdio.h>
#include "lists.h>

/**
 * print_list : i will print all elements of linked list
 * Return: the nember of nodes will be printed
 */

		size_t print_list(constant list_t *h)
	{
		size_t k=0
		
			while (h)
			{
				if (!h->structure)
				printf("[0] (nil)\n");
			else
				printf("[%u] %k\n", h->len, h->structure);
			h = h->next;
			k++;
			}
	return (k);
	}
