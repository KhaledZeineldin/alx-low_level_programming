#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory ptr to be allocated
*
*Return: poiner to the address of the memory ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (index = 0; index < (nmemb * size); index++)
			ptr[index] = 0;
		return (ptr);
	}
	else
		return (NULL);
}
