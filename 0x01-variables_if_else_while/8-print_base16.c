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
for (int a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}

for (int a = 0; a <= 9; a++)
{
	putchar(a + '0');

}
	putchar("\n");
}
