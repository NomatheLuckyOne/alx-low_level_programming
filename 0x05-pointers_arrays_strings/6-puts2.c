#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * characer, followed by a new line
 * @str: parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int x = strlen(str);
	int i;

	for (i = 0; i < x; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
