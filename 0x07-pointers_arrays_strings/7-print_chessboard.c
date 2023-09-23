#include "main.h"
#include <stdio.h>

/**
 * _chessboard - prints the chessboard
 * @a: array
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{
int l;
int k;

for (l = 0; l < 8; l++)
{
for (k = 0; k < 8; k++)
putchar(a[l][k]);
putchar('\n');
}
}

