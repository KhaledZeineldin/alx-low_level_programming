#include "main.h"
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string str of any of the bytes in
*the string accept
*
*@str: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in str that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *str, char *accept)
{
	int index;

	while (*str)
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *str)
				return (str);
		}
		str++;
	}

	return ('\0');
}
