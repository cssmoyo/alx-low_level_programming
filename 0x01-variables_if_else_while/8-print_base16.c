#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
int p;
char q;

for (p = '0'; p <= '9'; p++)
putchar(p);

for (q = 'a'; q <= 'f'; q++)
putchar(q);
putchar('\n');

return (0);

}
