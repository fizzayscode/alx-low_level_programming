#include <stdio.h>
#include "main.h"
/**
 * _islower - check integer intered is lowercase of not
 *
 * @alpha: is the integer we will check
 *
 * Return: return 0 or 1
 */

int _islower(int alpha)
{
	if (alpha >= 97 && alpha <= 122)
		return (1);
	return (0);
}
