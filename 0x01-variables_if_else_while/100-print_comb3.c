#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 *prints all possible two digit combinations
 *Return: Always 0
 */

int main(void)
{
	int i, co;

	for (i = '0'; i < '9'; i++)
	{
	for (co = i + 1; co <= '9'; co++)
	{
	if (co != i)
	{
	putchar(i);
	putchar(co);
	if (i == '8' && co == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}
