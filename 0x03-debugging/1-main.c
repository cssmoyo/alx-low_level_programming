#include <stdio.h>

/**
 *main - Point of entry
 *causes an infinte loop
 *Return: Always 0
 */

int main(void)
{
	int il;

	printf("Infinite loop incoming : (\n");

	il = 0;

	while (il <10)
	{
		putchar(il);
	}

	printf("Infinte loop avoided! \\o/\n");

	return (0);
}
