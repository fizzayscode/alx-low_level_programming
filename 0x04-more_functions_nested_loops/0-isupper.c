#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *
 *@c: the input is c to check if its capiatal
 * Return: Always 0.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

