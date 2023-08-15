#include <stdlib.h>
#include <time.h>
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
putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('0');
return (0);
}
}
