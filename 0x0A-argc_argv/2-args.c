#include <stdio.h>

/**
 * main - prints all arguements it receives
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: int
 */

int main(argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
