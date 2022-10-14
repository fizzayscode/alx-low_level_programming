#include<stdio.h>
/**
*main -Entry point
*
* Description: print from z -a
* Return: Aways 0 (Success)
*/
int main(void)
{
	char a = 'z';

	while (a != 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
