#include<unistd.h>
#include "main.h"
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 * _putchar -prints a character
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		putchar(((m / count) % 10) + 48);
	}
}
void _putchar(void)
{
	return (write(1, &c, 1));
}
