#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Point of Entry
 *print lowercase alphabet in reverse,followd by line
 *Return: Always 0
 */

int main(void)
{
	char lwcs;

	for (lwcs = 'z'; lwcs >= 'a'; lwcs--)
	putchar(lwcs);
	putchar('\n');
	return (0);

}
