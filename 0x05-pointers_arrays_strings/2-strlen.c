#include "main.h"
/**
 * _strlen - count the length of string
 *
 * @s: the string
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	int len = 0;

	for (i = 0; *s != '\0'; s++, i++)
	{
		len++;
	}
	return (len);
}
