#include "main.h"
#include <stdio.h>

/**
 *   _puts - prints a string, followed by a new line, to stdout
 *   @str: pointer to print string
 *   Return: void
 */

void _puts(char *str)
{

int a;

for (a = 0; str[a] != '\0'; a++)
{
putchar(str[a]);
}
putchar('\n');

}
