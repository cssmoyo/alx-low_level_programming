#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0(success)
 */

int main(void)
{
int j;

for (j = '0'; j <= '9'; j++)
putchar(j);
putchar('\n');

return (0);

}
