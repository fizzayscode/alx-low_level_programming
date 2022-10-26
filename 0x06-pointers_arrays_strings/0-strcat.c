#include "main.h"
/**
 * _strcat - concatenate to strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: return a sting
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	for (i = 0; dest[i] != '\0'; i++)
		;
	len = i;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len++] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
