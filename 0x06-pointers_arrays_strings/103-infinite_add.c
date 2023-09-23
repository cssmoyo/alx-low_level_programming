#include "main.h"

/**
 * reverse_string - reverse aan array
 * @x: interger to be checked
 * Return: 0 (success)
 */

void reverse_string(char *x)
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
int z = 0, y = 0, x = 0, u = 0;
int num1 = 0, num2 = 0, hold_sum = 0;

while (*(n1 + y) != '\0')
y++;
while (*(n2 + x) != '\0')
x++;
y--;
x--;
if (x >= size_r || y >= size_r)
return (0);
while (x >= 0 || y >= 0 || z == 1)
{
if (y < 0)
num1 = 0;
else 
num1 = *(n1 + y) - '0';
if (x < 0)
num2 = 0;
else
num2 = *(n2 + x) - '0';
hold_sum = num1 + num2 + z;
if (hold_sum >= 10)
z = 1;
else
z = 0;
if (u >= (size_r - 1))
return (0);
*(r + u) = (hold_sum % 10) + '0';
u++;
x--;
y--;
}
if (u == size_r)
return (0);
*(r + u) = '\0';
reverse_string(r);
return (r);
}
