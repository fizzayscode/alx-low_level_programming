#include <stdio.h>
#include "main.h"
/**
 * _islower - check integer intered is lowercase of not
 *
 * @c: is the integer we will check
 *
 * Return: return 1 if alphabets and 1 is not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
