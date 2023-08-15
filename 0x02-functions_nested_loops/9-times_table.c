#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * Return: Always 0 (Success)
 *
*/
void times_table(void)
{
int i, j = 0;
for (i =0; i <= 9; i++)
{
_putchar(i + 48);
if (i == 9)
{
j =0;
continue;
}
_putchar(',');
_putchar(' ');
}

}
