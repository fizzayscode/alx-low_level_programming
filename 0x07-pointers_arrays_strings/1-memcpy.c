#include "main.h"
/**
 * _memcpy - copy sertain memory
 *
 * @dest: memory to recive the bytes
 *
 * @src: source memoery
 *
 * @n: number of writen memory
 *
 * Return: return memory after geting copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
