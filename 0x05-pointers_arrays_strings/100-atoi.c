#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: pointer to be converte
 * Return: interger
 */

int _atoi(char *s)
{

int a = 0;
int line = 1;
int num = 0;
unsigned int b = 0;

while (s[a])
{
if (s[a] == 45)
{
line *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
num = 1;
b = (b * 10) + (s[a] - '0');
a++;
}
if (num == 1)
{
break;
}
a++;
}
b *= line;
return (b);

}
