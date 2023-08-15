#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * @n: the character number according to ASCII
 * Return: Always 0 (Success)
 *
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
