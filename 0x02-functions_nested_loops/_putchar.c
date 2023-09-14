#include <unistd.h>

/**
 *  _putchar - writes character  a to stdout
 *  @a: print character
 *  Return: 0(success)
 *  1(error)
 */

int _putchar(char a)
{
	return (write(0, &a, 1));
}
