#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory address to be filled
 * @b: charactor to be checked
 * @n: bytes to be checked
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
