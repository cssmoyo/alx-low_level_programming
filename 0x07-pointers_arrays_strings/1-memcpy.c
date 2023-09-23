#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory address to be filled
 * @src: copy memory address 
 * @n:bytes 
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;

for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
