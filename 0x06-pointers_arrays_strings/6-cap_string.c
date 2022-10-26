#include "main.h"
/**
 * cap_string - capitalise all words
 *
 * @a: paragraph to capicalise
 *
 * Return: capitalised string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	if (a[i] == ' ' ||
			a[i] == '\n' ||
			a[i] == '\t' ||
			a[i] == '.' ||
			a[i] == ';' ||
			a[i] == '!' ||
			a[i] == '?' ||
			a[i] == '"' ||
			a[i] == '(' ||
			a[i] == ')' ||
			a[i] == '{' ||
			a[i] == '}' ||
			a[i] == 0)
	{
		++i;
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	}

	return (a);
}
