#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - secondary function
 *
 * Description: print the alphabet in lowercase
 *
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
}
