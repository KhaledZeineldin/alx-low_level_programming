#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character character in the string str, or NULL if the
*character is not found
*
*@str:string targeted
*@character:character targeted
*
*Return: returns pointer to first occcurence of character
*/
char *_strchr(char *str, char character)
{
	int index;

	for (index = 0; (str[index] != character) && (str[index] != '\0'); index++)
		;
	if (str[index] == character)
		return (str + index);
	else
		return (NULL);
}
