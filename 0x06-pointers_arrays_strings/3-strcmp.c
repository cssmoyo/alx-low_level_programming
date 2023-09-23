#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: character to be checked
 * @s2: charactor to be checked
 * Retrun: s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] != '\0' &&s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return s1[a] - s2[a];
}
a++;
}
return (0);

}
