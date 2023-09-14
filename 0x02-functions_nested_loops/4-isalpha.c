#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @j: character to be checked
 * Return: 1 (success) and 0 if not
 */

int _isalpha(int j)
{
if ((j >= 65 && j <= 90) || (j >= 97 && j <= 122))
{
return (1);
}
return (0);
}
