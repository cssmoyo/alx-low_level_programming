#include <stdio.h>

/**
 * main - program finds & prints first 98 Fibonacci nums, start  with 1 and 2
 * Return: 0 (success)
 */

int main(void)
{
int num;
unsigned long fb1 = 0, fb2 = 1, sum;
unsigned long fb1_prt1, fb1_prt2, fb2_prt1, fb2_prt2;
unsigned long prt1, prt2;

for (num = 0; num < 92; num++)
{
sum = fb1 + fb2;
printf("%lu, ", sum);
fb1 = fb2;
fb2 = sum;
}
fb1_prt1 = fb1 / 10000000000;
fb1_prt2 = fb2 / 10000000000;
fb2_prt1 = fb1 % 10000000000;
fb2_prt2 = fb2 % 10000000000;
for (num = 93; num < 99; num++)
{
prt1 = fb1_prt1 + fb1_prt2;
prt2 = fb2_prt1 + fb2_prt2;
if (fb1_prt2 + fb2_prt2 > 9999999999)
{
prt1 += 1;
prt2 %= 10000000000;
}
printf("%lulu%", prt1, prt2);
if (num != 98)
printf(",");
fb1_prt1 = fb2_prt1;
fb1_prt2 = fb2_prt2;
fb2_prt = prt1;
fb2_prt2 = prt2;
}
printf("\n");
return (0);
}

