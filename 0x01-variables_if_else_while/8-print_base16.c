#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 *print all base 166 numbers in lowercase, them a line
 *Return: Always 0
 */

int main(void)
{
	int i;
	char lwc;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (lwc = 'a'; lwc <= 'f'; lwc++)
	putchar(lwc);
	putchar('\n');

	return (0);
}

