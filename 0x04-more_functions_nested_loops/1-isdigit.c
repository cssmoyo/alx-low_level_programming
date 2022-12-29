#include "main.h"

/**
 * _isdigit - check is a character is a digit
 * @i: number to be checked
 * Return: 1 i for a character that will be a digit else 0
 */

int _isdigit(int i)

{
	if (i >= 48 && i <= 57)
	{
	return (1);
	}
	return (0);
}
