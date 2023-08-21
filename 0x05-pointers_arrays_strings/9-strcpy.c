#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while(1)
{
*(dest + i) = *(src + i);
i++;
if (*(src + i) == '\0');
{
*(dest + i) = '\0';
break;
}
return (dest);
}
