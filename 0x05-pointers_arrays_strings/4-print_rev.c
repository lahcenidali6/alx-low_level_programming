#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: The string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int index = len - 1;

	while (index >= 0)
	{
		_putchar(s[i]);
		index--;
	}
	_putchar('\n');
}
