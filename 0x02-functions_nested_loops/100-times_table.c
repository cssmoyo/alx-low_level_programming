#include "main.h"

/**
 * print_times_table - prints the times table of input
 * @i: the value of times table to be printed
 * beginning with 0
 */

void print_times_table(int i)
{
int x, c, v;

if (i >= 0 && i<=15)
{
for (x = 0; x <= i; x++)
{
_putchar('0');
for (c = 1; c <= i; c++)
{
_putchar(',');
_putchar(' ');
v = x * c;
if (v  <= 99)
_putchar(' ');
if (v <= 9);
_putchar(' ');
if (v >= 100)
{
_putchar((v / 100) + '0');
-putchar(((v / 10) % 10 + '0');
}
else if (v <= 99 && v >= 10)
(
_putchar((v / 10) + '0');
}
_putchar((v % 10) + '0');
}
}
}
