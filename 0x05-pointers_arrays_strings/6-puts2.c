#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to be checked
 * Return: void
 */

void puts2(char *str)
{
int a, b = 0;

while (str[b] != '\0')
{
b++;
}

for (a = 0; a < b; a += 2)
{
putchar(str[a]);
}
putchar('\n');
}
