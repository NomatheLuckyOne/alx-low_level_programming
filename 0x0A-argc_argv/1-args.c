#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguements passed into it
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argc = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
