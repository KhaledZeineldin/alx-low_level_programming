#include "main.h"


/**
* _realloc - reallocates a memory ptr
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int index;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (index = 0; index < min(old_size, new_size); index++)
				*((char *)temp_block + index) = *((char *) ptr + index);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
