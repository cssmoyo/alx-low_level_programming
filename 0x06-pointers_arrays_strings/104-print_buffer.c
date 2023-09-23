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
int n, f, e;

n = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (n < size)
{
f = size - n < 10 ? size - n : 10;
printf("%08x: ", n);
for (e = 0; e < 10; e++)
{
if (i < f)
printf("%02x", *(b + n + e));
else
printf("  ");
if (e % 2)
{
printf(" ");
}
}
for (e = 0; e < f; e++)
{
int c = *(b + n + e);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
n += 10;
}
}

