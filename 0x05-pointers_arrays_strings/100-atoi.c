#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: pointer to be converted
 * Return: interger
 */

int _atoi(char *s)
{

int a = 0, b = 1, c = 0;
unsigned int d = 0;

while (s[a])
{
if (s[a] == 45)
{
b *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
c = 1;
d = (d * 10) + (s[a] - '\0');
a++;
}
if (c == 1)
{
break;
}
a++;
}
d *= b;

return (d);

}
