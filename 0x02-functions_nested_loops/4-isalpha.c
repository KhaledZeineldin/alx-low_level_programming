#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * _isalpha - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * @c: the character number according to ASCII
 * Return: Always 0 (Success)
 *
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
