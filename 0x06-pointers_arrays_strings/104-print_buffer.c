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
int n = 0, z, y;

if (size <= 0)
{
printf("\n");
return;
}

while (n < size)
{
z = size - n < 10 ? size - n : 10;
printf("%08x:", n);
for (y = 0; y < 10; y++)
{
if (y < z)
printf("%02x", *(b + n + y));
else
printf(" ");
if (y % 2)
{
printf(" ");
}
}
for (y = 0; y < z; y++)
{
int e = *(b + n + y);

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

