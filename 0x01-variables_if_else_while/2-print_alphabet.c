#include <stdio.h>

/**
 * main - Prints lowercase alphabets
 * Return: If error, non 0 is returned.
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
