#include "main.h"
/**
 * _isdigit - check for digit
 *
 *Description: prints numbers from 1 to 9
 * Return: 1 if digit or 0 if not
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '9'; i++)
		_putchar(i);
	_putchar('\n');
}
