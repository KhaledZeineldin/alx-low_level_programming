#include <stdio.h>
/**
*main - print the sum of numbers
*of 3 or 5 below 1024
*Return: return 0
*/
int main(void)
{
unsigned long n, x = 1, y = 0, sum = 0;
for (n = 0; n < 50; n++)
{
sum = x + y;
y = x;
printf("%lu", sum);
x = sum;
if (n == 49)
{
printf("\n");
continue;
}
printf(", ");
}
return (0);
}
