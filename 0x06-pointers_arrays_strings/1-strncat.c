#include "main.h"
/**
 * _strncat - concatenate strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of character to concatenate
 *
 * Return: return a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; dest[i] != '\0'; i++)
		;
	len=i;
	for (j = 0; src[j] != '\0' j++)
	{
		if(j < n)
		{
			dest[len++] = src[j];
		}
		dest[i] = '\0';
	}
	return (dest);
}
