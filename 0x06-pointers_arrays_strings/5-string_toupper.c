#include "main.h"
/**
 * string_toupper - uppercase the thing
 *
 * @c: caracter to uppercase
 *
 * Return: string in uppecase mode
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		while (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
