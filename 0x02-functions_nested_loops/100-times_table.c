#include "main.h"

/**
 *print_times_table - prints the n times table
 *starting with 0
 *@n: value of the times table to be printed
 */

void print_times_table(int n)

{
	int digi, var, result;

	if (n >= 0 && n <= 15)
	{
	for (digi = 0; digi <= n; digi++)
	{
	_putchar('0');
	for (var = 1; var <= n; var++)
	{
	_putchar(',');
	_putchar(' ');
	result = digi * var;
	if (result <= 99)
	_putchar(' ');
	if (result <= 9)
	_putchar(' ');
	if (result >= 100)
	{
	_putchar((result / 100) + '0');
	_putchar(((result / 10)) % 10 + '0');
	}
	else if (result <= 99 && result >= 10)
	{
	_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
