#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * Return: Always 0 (Success)
 *
*/
void jack_bauer(void)
{
int minute, hour;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar(10);
}
}
}
