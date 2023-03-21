#include "main.h"
/**
 * print_alphabet_x10-prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int j = 0;

	for (; j < 10; j++)
	{
		int i = 97;

		while (i <= 122)
		{
			char c = i;

			_putchar(c);
			i++;
		}
		_putchar('\n');
	}
}
