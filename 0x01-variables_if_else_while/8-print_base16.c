#include <stdio.h>

/**
 * main - Print numbers in base 16.
 * Return: if error, non 0 will be returned.
 */

int main(void)
{
	int num;
	char sc;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + 0);

	for (sc = 'a'; sc <= 'f'; sc++)
		putchar(sc);

	putchar('\n');
	return (0);
}
