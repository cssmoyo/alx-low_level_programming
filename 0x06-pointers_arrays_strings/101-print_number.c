#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @x: interger to be checked
 * Return: 0 (success)
 */

void print_number(int n)
{
unsigned int m;

m = n;

if (n < 0)
{
_putchar('-');
m = -n;
}
if (m / 10 != 0)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}
