#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: charactor to be checked
 * Return: void
 */

void print_rev(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

for (i--; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
