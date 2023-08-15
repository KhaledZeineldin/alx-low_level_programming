#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * @n: the character number according to ASCII
 * Return: Always 0 (Success)
 *
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = -1 * (n % 10);
}
else
{
n = n % 10;
}
_putchar(n + '0');
return (n);
}
