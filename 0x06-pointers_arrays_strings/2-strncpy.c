#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to be checked
 * @src: pointer to be cheecked
 * @n: charactor to be checked
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int b = 0;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}

return (dest);

}
