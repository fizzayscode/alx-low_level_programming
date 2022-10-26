#include "main.h"
/**
 * _strncpy - copy a string
 *
 * @dest: destination
 *
 * @src: source string
 *
 * @n: number of element to copy
 *
 * Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++, j++)
		if (j < n)
		dest[i] = src[j];
	while (j < n)
		j++;
	dest[j] = '\0';
	return (dest);
}
