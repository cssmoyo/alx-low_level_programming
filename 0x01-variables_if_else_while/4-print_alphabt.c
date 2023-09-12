#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Print all the letters except q and e
 * Return: 0 (success)
 */

int main(void)
{
char g, e, q;
e = 'e';
q = 'q';

for (g = 'a'; g <= 'z'; g++)
{
if (g != e && g != q)
putchar(g);
}
putchar('\n');
return (0);
}
