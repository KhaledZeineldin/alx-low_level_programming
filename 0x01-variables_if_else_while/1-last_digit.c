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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of%d, n");
	if (n % 10 > 5)
	{	printf("and is greater than 5");
	}
	if (n % 10 == 0)
	{	printf("and is 0");
	}
	if (n % 10 < 6 && n % 10 != 0)
	{	printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
