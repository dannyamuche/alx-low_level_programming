#include <stdio.h>

/**
 * main - prints lower and upper cases
 * Return: if error, return non zero
 */

int main(void)
{
	char ul;

	for (ul = 'a'; ul <= 'z'; ul++)
		putchar(ul);

	for (ul = 'A'; ul <= 'Z'; ul++)
		putchar(ul);

	putchar('\n');

	return (0);
}
