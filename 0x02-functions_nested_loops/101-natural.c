#include <stdio.h>
/**
*main - print the sum of numbers
*of 3 or 5 below 1024
*Return: return 0
*/
int main(void)
{
int n, sum = 0;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 ==0)
{
sum += n;
}
}
_putchar(sum + 48);
_putchar('\n');
}
