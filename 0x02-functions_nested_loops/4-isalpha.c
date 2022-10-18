#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check integer is an alphabets or not
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
