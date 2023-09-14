#include "main.h"

/**
 * _islower - checks if characters are lower case
 * @j: character to be checked
 * Return:1 (success)and 0 if not
 */

int _islower(int j)
{
if (j >= 97 && j <= 122)
{
return (1);
}
return (0);
}
