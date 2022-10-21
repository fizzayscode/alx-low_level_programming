#include "main.h"

/**
 * _isupper - check the code.
 *
 *@c: the input is c to check if its capiatal
 * Return: return 1 if uppercase else 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

