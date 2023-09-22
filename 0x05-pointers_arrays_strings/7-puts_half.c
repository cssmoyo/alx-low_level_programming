#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to be printed
 * Return: void
 */

void puts_half(char *str)
{
int a = 0, b;

while (str[a]  != '\0')
{
a++;
}

if (a % 2 == 1)
{
b = (a - 1) / 2;
b += 1;
}
else
{
b = a / 2;
}

for (; b < a; b++)
{
putchar(str[b]);
}
putchar('\n');
}
