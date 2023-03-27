#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '.' && str[i + 1] == '\0')
		{
			_putchar(str[i]);
			break;
		}
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
