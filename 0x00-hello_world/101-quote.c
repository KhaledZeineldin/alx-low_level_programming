#include<stdio.h>
#include<unistd.h>
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
	char wo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, wo, 59);
	return (1);
}
