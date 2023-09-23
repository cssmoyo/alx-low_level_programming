#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: charactor to be checked
 * @accept: charactor to be checked
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
int b;

while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
return (s);
}
s++;
}
return ('\0');
}
