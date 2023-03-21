#include "main.h"
/**
 * print_alphabet-prints the alphabet, in lowercase
 */
void print_alphabet(void)
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
