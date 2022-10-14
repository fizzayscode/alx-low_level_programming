#include<stdio.h>
/**
* main -Entry point
*
*Description: prints all alphabets
* Return: Aways 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	char f = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
