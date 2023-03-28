#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
	int len = 0, start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = len / 2;
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
