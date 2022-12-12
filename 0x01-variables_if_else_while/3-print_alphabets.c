#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 * prints alphabet in lowercase,uppercase ,new line
 *Return:Always 0
 */

int main(void)
{
	char ks;

	for (ks = 'a'; ks <= 'z'; ks++)
		putchar(ks);

	for (ks = 'A'; ks <= 'Z'; ks++)
		putchar(ks);

	putchar('\n');

	return (0);
}
