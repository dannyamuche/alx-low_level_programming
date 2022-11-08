#include <stdio.h>
/**
 * main - prints the name
 * @argc: the number of command line argument
 * @argv: array that contains the command line arguments
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
