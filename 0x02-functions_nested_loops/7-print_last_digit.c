#include "main.h"

/**
 * prints_last_digit - prints the last digit of a number
 * @j:number to be checked
 * Return: last digit
 */

int print_last_digit(int j)
{
int z;

z = j % 10;
if (z < 0)
{
z = z * -1;
}
_putchar(z + '0');
return (z);
}
