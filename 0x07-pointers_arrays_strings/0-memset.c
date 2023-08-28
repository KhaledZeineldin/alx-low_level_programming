#include "main.h"
/**
*_memset - The _memset() function fills
* the first number bytes of the memory area
* pointed to by str with the constant byte x
*@str:target
*@x: constant byte
*@number:number of byte
*Return: returns new value of target
*/

char *_memset(char *str, char x, unsigned int number)
{
	while (number)
	{
		str[number - 1] = x;
		number--;
	}
	return (str);

}
