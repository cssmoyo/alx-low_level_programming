#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (succes)
 */

int main(void)
{
int a = 0;
long b = 1, c = 2;

while (a < 50)
{
if (a == 0)
{
printf("%ld", b);
}
else if (a == 1)
{
printf(", %ld", c);
}
else
{
c += b;
b = c - b;
printf(", %ld", c);
}
++a;
}
printf("\n");
return (0);
}
