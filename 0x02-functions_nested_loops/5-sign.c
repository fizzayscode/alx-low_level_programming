#include <stdio.h>
#include "main.h"
/**
 * print_sign - check integer if its positive or negative
 *
 * @n: is the integer we will check
 *
 * Return: return 1 if sign is positive else -1 idf sign is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
