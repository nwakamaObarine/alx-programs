#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory and checks allocated memory
 *@b: parameter to be allocated
 *
 * Return: 98 on failure
*/

void *malloc_checked(unsigned int b)
{

	unsingned int *ptr;
	unsigned int b, i;

	ptr = (unsigned int *)malloc(n * sizeof(unsinged int));
	if (ptr == NULL)
	{
		exit(98)
	}
	else
	{
		printf("memory successfully allocated using malloc." '\n')
	}
	return (98);
}
