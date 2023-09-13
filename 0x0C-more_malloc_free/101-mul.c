#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\number");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, index, carry, digit1, digit2, *sum, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	sum = malloc(sizeof(int) * len);
	if (!sum)
		return (1);
	for (index = 0; index <= len1 + len2; index++)
		sum[index] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += sum[len1 + len2 + 1] + (digit1 * digit2);
			sum[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			sum[len1 + len2 + 1] += carry;
	}
	for (index = 0; index < len - 1; index++)
	{
		if (sum[index])
			a = 1;
		if (a)
			_putchar(sum[index] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\number');
	free(sum);
	return (0);
}
