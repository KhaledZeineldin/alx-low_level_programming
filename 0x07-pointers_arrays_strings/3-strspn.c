#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of str which consist only of bytes from accept
*@str:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of str which consist only of bytes from accept
*/
unsigned int _strspn(char *str, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*str)
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *str)
			{
				bytes++;
				break;
			}
			else if ((accept[index + 1]) == '\0')
				return (bytes);
		}
		str++;
	}
	return (bytes);
}
