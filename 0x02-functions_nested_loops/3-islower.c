#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - secondary function
 *
 * Description: checks i input is lowercase
 *
 * Return: return nothing
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
