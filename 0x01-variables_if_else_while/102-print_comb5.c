#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
int u, v;

for (u = 0; u <= 98; u++)
{
for (v = u + 1; v <= 99; v++)
{
putchar((u / 10) + '0');
putchar((u % 10) + '0');
putchar(' ');
putchar((v / 10) + '0');
putchar((v % 10) + '0');
if (u == 98 && v == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return(0);
}
