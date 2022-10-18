#include <stdio.h>
#include "main.h"
/**
 *_abs - print positive value regardless
 *
 * @n: the integer to print the sign of
 *
 * Description: program that returns postive values
 *
 * Return: positive value > 1
 */
int _abs(int n)
{
	int w = 0;

	if (n < 0)
	{
		w = n * -1;
		return (w);
	}
	return (n);
}
