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
printf("%d", n % 10);
return (n % 10);
}
