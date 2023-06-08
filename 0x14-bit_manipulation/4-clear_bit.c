#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: number of change of pointer
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
