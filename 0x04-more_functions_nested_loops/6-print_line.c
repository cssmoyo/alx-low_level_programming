#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: character that will be checked and represent the line
 */

void print_line(int n)
{
int line;

for (line = 0; line < n; line++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
