#include<stdio.h>
/**
* main -Entry point
*
* Description: all alphabets asied e and q
* Return: Aways 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
