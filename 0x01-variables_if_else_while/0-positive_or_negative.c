#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the sign of the input number
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
	if (n > 0)
	{
		printf("%dis positive", n);
	}
	if (n == 0)
	{
		printf("%dis zero", n);
	}
	else
	{printf("%dis negative", n);
	return (0);
}
