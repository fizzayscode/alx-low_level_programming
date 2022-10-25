#include "main.h"
/**
 * puts_half - print half
 *
 * @str: string
 *
 * Return: noting;
 */
void puts_half(char *str)
{
	int i, l, j, len;

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i;
	if (len % 2 == 0)
	l = len / 2;
	else
	l = (len - 1) / 2;
	for (j = l; j <= i - 1; j++)
	{
		_putchar(str[j]);
	}
	putchar('\n');
}

