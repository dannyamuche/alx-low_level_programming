#include <stdio.h>

/**
 * main - prints the number of arguments it receives
 * @argc: the number of argument
 * @argv: the arrays that stores the number of arguments
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i;
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
