#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - secondary function
 *
 * Description: prints alphabets rom a-z
 *
 * Return: return nothing
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
