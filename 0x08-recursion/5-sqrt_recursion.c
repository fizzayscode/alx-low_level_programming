#include "main.h"

/**
 * num - return the natural square root
 *
 * @n: the number
 * @m: the second number
 *
 * Return: return natural square root of a number
 */
static int num(int m, int n)
{
	if ((n * n) == m)
		return (n);
	if ((n * n) > m)
		return (-1);
	return (num(m, n + 1));
}
/**
 * _sqrt_recursion - return the natural square root
 *
 * @n: the number
 *
 * Return: return natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (num(n, 1));
}
