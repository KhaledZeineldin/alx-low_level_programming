#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _abs - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * @n: the character number according to ASCII
 * Return: Always 0 (Success)
 *
*/
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else
{
return (n * (-1));
}
}
