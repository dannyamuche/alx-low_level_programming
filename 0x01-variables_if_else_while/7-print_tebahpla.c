#include <stdio.h>

/**
 * main - Print Alphabet Backwards.
 * Return: Returns 0 if no errors
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');
	return (0);
}
