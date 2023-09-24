#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square int matrix
 * @a: value to be checked
 * @size: value  to be checked
 * Return: 0 (success)
 */

void print_diagsums(int *a, int size)
{

int total1, total2, c;

total1 = 0;
total2 = 0;

for (c = 0; c < size; c++)
{
total1 = total1 + a[c * size + c];
}
for (c = size - 1; c >= 0; c--)
{
total2 += a[c * size + (size - c - 1)];
}
printf("%d, %d\n", total1, total2);

}
