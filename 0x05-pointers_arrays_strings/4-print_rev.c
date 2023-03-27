#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: The string
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[len] != '\0')
	{
		len++;
	}
	index = len - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
