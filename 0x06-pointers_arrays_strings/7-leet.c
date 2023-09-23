#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: charactor to be checked
 * Return: x
 */

char *leet(char *x)
{
int a;
int b;
char w1[] = "aAeEoOtTlL";
char w2[] = "4433007711";

for (a = 0; x[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (x[a] == w1[b])
{
x[a] = w2[b];
}
}
}
return (x);

}
