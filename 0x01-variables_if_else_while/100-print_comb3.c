#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints using the puts function
 *
 * Return: Always 1 (Success)
 *
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		if (i != j)
		{
			putchar(i + '0');
			putchar(j + '0');
		if (i == 8 && j == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}