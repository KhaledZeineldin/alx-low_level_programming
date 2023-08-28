#include "main.h"
/**
*_memcpy - The _memcpy() function copies number bytes
* from memory area source to memory area destination
*@destination:area where bytes are copied to
*@source:area where bytes are copied from
*@number:number of bytes to copy
*Return: returns a pointer to number
*/
char *_memcpy(char *destination, char *source, unsigned int number)
{
	unsigned int index = 0;

	for (; index < number; index++)
		destination[index] = source[index];

	return (destination);
}

