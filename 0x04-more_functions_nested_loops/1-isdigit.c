#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 (sucess) and 0 for anything else
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
