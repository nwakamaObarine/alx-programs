#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory and checks allocated memory
 *@b:byte to be allocated
 *
 * Return: 98 on failure
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
