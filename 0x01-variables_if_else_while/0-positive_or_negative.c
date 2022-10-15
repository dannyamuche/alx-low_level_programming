#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 * Return: If errors, zero will be returned.
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			print ("%d is positive\n", n);
		}
		else if (n == 0)
		{
			print ("%d is zero\n", n);
		}
		else
		{
			print ("%d is negative\n", n);
		}

		return (0);
}
