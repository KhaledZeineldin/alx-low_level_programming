#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Description: A program that tells if a number's
 * units digit is greater than of less than five
 *
 * Return: Always 0 (Success)
 *
*/

void print_alphabet_x10(void)
{
	int i;

for (i = 0; i <= 9 ; i++)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
