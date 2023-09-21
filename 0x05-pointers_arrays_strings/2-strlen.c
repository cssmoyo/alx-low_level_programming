#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: charactor to be checked
 * Return: length
 */

int _strlen(char *s)
{
int line = 0;

while (*(s + line) != '\0')
line++;

return (line);
}
