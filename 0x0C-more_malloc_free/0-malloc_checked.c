#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocate memory to malloc
 * @b: input int to allocate to memory
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
return (p);
}


