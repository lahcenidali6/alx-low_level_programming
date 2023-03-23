#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j != i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(92);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
