#include "main.h"

/**
 * _isalpha -checks for alphabetic characters
 * @c: character check
 * Return: 1 for alphaabetic character else 0
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	
	return (1);
	}
	return (0);
}

