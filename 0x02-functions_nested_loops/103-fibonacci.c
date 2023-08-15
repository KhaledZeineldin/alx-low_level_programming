#include <stdio.h>
/**
*main - print the sum of numbers
*of 3 or 5 below 1024
*Return: return 0
*/

int main(void)
{
unsigned long  x = 1, y = 0, sum = 0, total = 0;
for (; sum < 4000000;)
{
sum = x + y;
y = x;
if (sum % 2 == 0)
{
total += sum;
if (total >= 4000000)
{
printf("%lu\n", total);
break;
}
}
x = sum;
}
return (0);
}
