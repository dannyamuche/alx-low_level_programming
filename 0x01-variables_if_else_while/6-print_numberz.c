#include <stdio.h>

/**
 * main - print single digits with putchar
 * Return: if errors, return non 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
