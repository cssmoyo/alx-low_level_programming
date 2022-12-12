#include <stdio.h>

/**
 *main -Point of Entry
 *prints all single digit numbers of base 10 starting from 0,new line
 *Return:Alyways 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
