#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @x: pointer to be checked
 * Return: *x
 */

char *rot13(char *x)
{
int a;
int b;

char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set2[] = "NOPQRSTUVWXYXABCDEFGHIKKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; x[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (x[a] == set1[b])
{
x[a] = set2[b];
break;
}
}
}
return (x);

}
