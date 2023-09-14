#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,from 00:00 to 23:59
 * Return: evey minute of Jack Bauer's day
 */

void jack_bauer(void)
{
int r, s, t, u;

for (r = 0; r <= 2; r++)
{
for (s = 0; s <= 9; s++)
{
if ((r <= 1 && s <= 9) || (r <= 2 && s <= 3))
{
for (t = 0; t <= 5; t++)
{
for (u = 0; u <= 9; u++)
{
_putchar(r + '0');
_putchar(s + '0');
_putchar(58);
_putchar(t + '0');
_putchar(u + '0');
_putchar('\n');
}
}
}
}
}
}
