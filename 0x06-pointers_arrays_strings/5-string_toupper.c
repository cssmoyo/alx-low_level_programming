#include "main.h"

/**
 * string_toupper -changes all lowercase letters of a string to uppercase
 * @x: pointer to be checked
 * Return: x
 */

char *string_toupper(char *x)
{
int a = 0;

while (x[a] != '\0')
{
if (x[a] >= 'a' && x[a] <= 'z')
x[a]  -=  32;
a++;
}
return (x);
}
