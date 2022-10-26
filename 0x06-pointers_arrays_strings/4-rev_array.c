#include "main.h"
/**
 * reverse_array - reverse array
 *
 * @a: the array
 *
 * @n: the array length;
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < (n - 1) / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
