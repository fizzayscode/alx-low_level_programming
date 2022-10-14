#include <stdio.h>

/**
* main - main function
*
* Description: print the hexadecimal codes
* using putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
