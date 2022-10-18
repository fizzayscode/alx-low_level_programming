#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @n: the integer to print the sign of
 *
 * Return: last digit in a number
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
		b = b * -1;
	_putchar(b + '0');
	return (b);
}
