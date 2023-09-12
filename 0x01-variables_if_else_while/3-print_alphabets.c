#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in lower then uppaercase
 * Return: 0(success)
 */

int main(void)
{
char g;

for (g = 'a'; g <= 'z'; g++)
putchar(g);

for (g = 'A'; g <= 'Z'; g++)
putchar(g);
putchar('\n');

return (0);

}
