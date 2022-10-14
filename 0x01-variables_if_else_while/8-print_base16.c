#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Description: program print the hexadecimal codes
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char a = 0;

	while (a <= 9)
	{

		putchar(a + '0');
		a++;

	}
	a = 97;

	while (a < 103)
	{

		putchar(a);
		a++;

	}

	putchar('\n');

	return (0);
}
