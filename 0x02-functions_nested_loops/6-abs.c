#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j:valuable to be checked
 * Return: absolute value  or 0
 */

int _abs(int j)
{
if (j < 0)
{
int real_value;

real_value = j * -1;
return (real_value);
}
return (j);
}
