#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 (success)
 */

int main(void)
{
long a, max;
long num =  612852475143;
double root = sroot(num);

for (a = 1; a <= root;; a++)
{
if (num % a == 0)
{
max = num / a;
}
}
printf("%ld", max);
return (0);
}
