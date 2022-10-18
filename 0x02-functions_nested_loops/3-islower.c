#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - secondary function
 *
 * @c: checks c input is lowercase
 *
 * Return: return 1 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
