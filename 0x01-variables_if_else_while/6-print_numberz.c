#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that tells if a number's
 * units digit is greater than of less than five
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int a;
for (a = 1; a <= 9; a++)
{
	putchar(a + '0');
}
	putchar('\n');
	return (0);
}
