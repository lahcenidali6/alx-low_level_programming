#include "main.h"
/**
 * main - Entry point,
 *
 * Return: Always 0 (Success)
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
