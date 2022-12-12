#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 *prints single digit num of base 10 from 0,then line
 *Return: Always 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
