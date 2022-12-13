#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 *prints all possible single-digit number combination
 *Return: Always 0
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	if (c != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
