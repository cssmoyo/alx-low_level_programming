#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 * prints alphabet in lowercase, followed by a new line
 *Return: Always 0
 */

int main(void)
{
	char lw;
	char e, q;

	e = 'e';
	q = 'q';

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != e && lw != q)
			putchar(lw);
	}

	putchar('\n');

	return (0);
}
