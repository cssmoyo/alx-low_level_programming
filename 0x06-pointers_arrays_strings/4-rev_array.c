#include "main.h"

/**
 *  reverse_array - reverses the content of an array of integers
 *  @a: an array
 *  @n: elemenrs of an array
 *  Return: void
 */

void reverse_array(int *a, int n)
{
int d;
int b;

for (d = 0; d < n--; d++)
{
b =  a[d];
a[d] = a[n];
a[n] = b;
}
}

