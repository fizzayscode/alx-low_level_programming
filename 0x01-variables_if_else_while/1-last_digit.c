#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: program that checks the last digit
 *
 * Return: Aways 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char a[10];

	int i, f;

	sprintf(a, "%d", n);

	for (i = 0; a[i] != '\0'; i++)
		;

	if (n < 0)
	f = -(a[i - 1] - 48);
	else
	f = a[i - 1] - 48;
	printf("Last digit of %d is %d", n, f);
	if (f > 5)
	printf(" and is greater than 5\n");
	else if ((f < 6) && (f != 0))
	printf(" and is less than 6 and not 0\n");
	else
	printf(" and is 0\n");
	return (0);
}
