#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - secondary function
 *
 * @a: checks c input is lowercase
 *
 * Return: return 1 if uppercase
 */
int _islower(int a)
{
	if (a >= 97 && a <= 122)
		return (1);
	return (0);
}
