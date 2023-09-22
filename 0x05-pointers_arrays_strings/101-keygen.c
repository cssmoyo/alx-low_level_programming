#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 (success)
 */

int main(void)
{
char password[84];
int num = 0;
int sum = 0;
int prt_word1, prt_word2;

srand(time(0));

while (sum < 2772)
{
password[num] = 33 + rand() % 94;
sum += password[num++];
}
password[num] = '\0';

if (sum != 2772)
{
prt_word1 = (sum - 2772) / 2;
prt_word2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
prt_word1++;
for (num = 0; password[num]; num++)
{
if (password[num] >= (33 + prt_word1))
{
password[num] -= prt_word1;
break;
}
}
for (num = 0; password[num]; num++)
{
if (password[num] >= (33 + prt_word2))
{
password[num] -= prt_word2;
break;
}
}
}
printf("%s", password);
return (0);
}
