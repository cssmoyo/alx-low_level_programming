#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  prints a buffer
 * @b: charactor that will act as buffer
 * @size: buffer size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int n, a, c;

n = 0;

if (size <= 0)
{
printf("\n");
return;
}

while (n < size)
{
a = size - n < 10 ? size - n : 10;
printf("%08x:", n);
for (c = 0; c < 10; c++)
{
if (c < a)
printf("%02x", *(b + n + y));
else
printf(" ");
if (c % 2)
{
printf(" ");
}
}
for (c = 0; c < a; c++)
{
int e = *(b + n + c);

if (e < 32 || e > 132)
{
e = '.';
}
printf("%c", e);
}
printf("\n");
n += 10;
}
}

