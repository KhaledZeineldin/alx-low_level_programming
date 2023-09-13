#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @a: size of the memory ptr to be allocated
 *
 * Return: pointer to the address of the memory ptr
 */
void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
