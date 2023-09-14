#include "main.h"

/**
 * print_sign - writes the sign of a number
 * @j: character to be checked
 * Return: 1 for a positve number , -1 or 0 if not
 */

int print_sign(int j)
{
if (j > 0)
{
_putchar(43);
return (1);
}
else if (j < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
