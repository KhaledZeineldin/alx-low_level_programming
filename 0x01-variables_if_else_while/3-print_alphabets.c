#include <stdlib.h>
#include <time.h>

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
	int a, A;

	for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
	for (A = 'A'; A <= 'Z'; A++)
{
	putchar(A);
}
	putchar('\n');
	return (0);
}
