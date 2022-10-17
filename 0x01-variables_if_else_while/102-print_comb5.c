#include <stdio.h>
/**
 * main - Print Combo of 2 Twos
 * Return: Returns 0 if successful.
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= 99; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			putchar(' ');

			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (m == 98 && n == 99)
			{
				break;
			}

				putchar(',');
				putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
