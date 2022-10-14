#include<stdio.h>
/**
* main -Entry point
*
* Description : program that prints from 0-9
* Return: Aways 0 (Success)
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
