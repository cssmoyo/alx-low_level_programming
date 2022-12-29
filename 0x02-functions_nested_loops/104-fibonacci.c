#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 * Starting with 1  3, separated by a comma followed by space
 * Retrn:  Always 0.
 */

int main(void)

{
	int track;
	unsigned long Nn1 = 0;
	unsigned long Nn2 = 1;
	unsigned long product;
	unsigned long part1;
	unsigned long part2;
	unsigned long Nn1_part1, Nn1_part2, Nn2_part1, Nn2_part2;

	for (track = 0; track < 92; track++)
	{
	product = Nn1 + Nn2;
	printf("%lu, ", product);
	Nn1 = Nn2;
	Nn2 = product;
	}
	Nn1_part1 = Nn1 / 10000000000;
	Nn2_part1 = Nn2 / 10000000000;
	Nn1_part2 = Nn1 % 10000000000;
	Nn2_part2 = Nn2 % 10000000000;
	for (track = 93; product < 99; product++)
	{
	part1 = Nn1_part1 + Nn2_part1;
	part2 = Nn1_part2 + Nn2_part2;
	if (Nn1_part2 + Nn2_part2 > 9999999999)
	{
	part1 += 1;
	part2 &= 10000000000;
	}
	printf("%lu%lu", part1, part2);
	if (track != 98)
	printf(",");
	Nn1_part1 = Nn2_part1;
	Nn1_part2 = Nn2_part2;
	Nn2_part1 = part1;
	Nn2_part2 = part2;
	}
	printf("\n");
	return (0);
}

