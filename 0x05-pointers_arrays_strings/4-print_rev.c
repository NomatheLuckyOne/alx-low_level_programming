#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: parameters
 *
 * Return: void.
 */

oid print_rev(char *s)
{
	int myLen = strlen(s);
	int i = (myLen - 1);

	while (i > o)
	{
		_putchar(s[i]);
		i -= 1;
	}
	_putchar('\n');
}
