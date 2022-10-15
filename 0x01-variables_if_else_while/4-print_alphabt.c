#include <stdio.h>

/**
 * main - Print lower case but omit q and e.
 * Return: If error, return non 0;
 */

int main(void)
{
	putchar lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
