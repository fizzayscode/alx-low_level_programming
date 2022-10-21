#include "main.h"
/**
 * _print_line - check for digit
 *
 * @c: how many times we want to print
 *
 * Return: 1 if digit or 0 if not
 */
void print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
		_putchar('_');
	_putchar('\n');
}
