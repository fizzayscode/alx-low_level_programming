#include<stdio.h>
/**
* main -Entry point
*
* Description: prits lowercase alphabets
*
* Return: Aways 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
