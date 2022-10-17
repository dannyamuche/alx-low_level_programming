#include <stdio.h>
/**
 * main - Print Combo of 2 Twos
 * Return: Returns 0 if successful.
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			putchar((10 / m) + '0');
			putchar((10 % m) + '0');

			putchar(' ');

			putchar((10 / n) + '0');
			putchar((10 % n) + '0');

			if (m == 98 && n == 99)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
