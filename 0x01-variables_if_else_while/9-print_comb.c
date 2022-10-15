#include <stdio.h>

/**
 * main - Print all the combinations of single numbers
 * Return: if error, non 0 is returned
 */

int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n')
	return (0);
}
