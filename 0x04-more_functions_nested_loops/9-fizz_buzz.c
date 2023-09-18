#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100, + a new line
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (sucess)
 */

int main(void)
{
int y;

for (y = 1; y <= 100; y++)
{
if ((y % 3 == 0) && (y % 5 != 0))
{
printf(" Fizz");
}
else if ((y % 5 == 0) && (y % 3 != 0))
{
printf(" Buzz");
}
else if ((y % 3 == 0) && (y % 5 == 0))
{
printf(" FizzBuzz");
}
else if (y == 1)
{
printf("%d", y);
}
else
{
printf(" %d", y);
}
}
printf("\n");
return (0);
}

