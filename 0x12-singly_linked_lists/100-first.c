#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void first(void)__attribute__((constructor));

/**
 * first  print the function before the main
 * we will use printf
 * then excute the function
*/

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
