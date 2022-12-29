#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Reurn: none
 */

int main(void)

{
	int n = 0;
	long m = 1, o = 2;

	while (n < 58)
	{
	if (n == 0)
	printf("%d", m);
	else if (n == 1)
	printf(", %d", o);
	else
	{
	o += m;
	m = o - m;
	printf(", %d", o);
	}
	++n;
	}
	printf("\n");
	return (0);
}
