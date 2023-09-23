#include "main.h"

/**
 * rev_string - reverse an array
 * @x: interger to be checked
 * Return: 0 (success)
 */

void rev_string(char *x)
{
int a = 0, b = 0;
char hold;

while (*(x + a) != '\0')
{
a++;
}
a--;
for (b = 0; b < a; b++, a--)
{
hold = *(x + b);
*(x + b) = *(x + a);
*(x + a) = hold;
}
}

/**
 * infinite_add - add 2 numbers
 * @n1: first number
 * @n2: second number
 * @r:pointer to be checked
 * @size_r: pointer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int more = 0, a = 0, b = 0, nums = 0;
int num1 = 0, num2 = 0, hold_sum = 0;

while (*(n1 + a) != '\0')
a++;
while (*(n2 + b) != '\0')
b++;
a--;
b--;
if (b >= size_r || a >= size_r)
return (0);
while (b >= 0 || a >= 0 || more == 1)
{
if (a < 0)
num1 = 0;
else
num1 = *(n1 + a) -'0';
if (b < 0)
num2 = 0;
else
num2 = *(n2 + b) -'0';
hold_sum = num1 + num2 + more;
if (hold_sum >= 10)
more = 1;
else
more = 0;
if (nums >= (size_r - 1))
return (0);
*(r + nums) = (hold_sum % 10) + '0';
nums++;
b--;
a--;
}
if (nums == size_r)
return (0);
*(r + nums) = '\0';
rev_string(r);
return (r);
}
