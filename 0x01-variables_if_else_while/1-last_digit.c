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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_digit = n % 10;
	printf("Last digit of %d is %d " , n , l_digit);
	if (l_digit > 5)
	{	printf("and is greater than 5");
	}
	if (l_digit== 0)
	{	printf("and is 0");
	}
	if (l_digit < 6 && l_digit != 0)
	{	printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
