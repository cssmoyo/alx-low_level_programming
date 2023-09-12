#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar function
 * Return: 0(success)
 */

int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		putchar(f);
		putchar('\n');
	}

		return (0);
}
