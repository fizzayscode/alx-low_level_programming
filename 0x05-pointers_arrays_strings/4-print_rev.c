#include "main.h"
/**
 * print_rev - print string on revese
 *
* @str: string
 *
 * Return: reversed string
 */
void print_rev(char *str)
{
	int len = 0;

	int i = 0;

	int j = 0;

	for (i = 0; str[i] != '\0' ; i++)
	{
		len++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
