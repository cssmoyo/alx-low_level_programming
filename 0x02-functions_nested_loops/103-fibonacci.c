#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: None!
 */

int main(void)

{
	int n = 0;
	long m = 1;
	long o = 2;
	long sum = o;

	while (o + m < 40000000)
	{
	o += m;
	if (0 % 2 == 0)
	sum += o;
	m = o - m;
	++n;
	}
	printf("%ld\n", sum);
	return (0);
}
