#include "main.h"
/**
 * _isdigit - check the character is digit or not
 *
 * @c: character to check
 *
 * Return: return 1 ifits a number and 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
