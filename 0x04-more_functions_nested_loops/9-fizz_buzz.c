#include <stdio.h>
#include<main.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(65);
		}
		else if (i % 5 == 0)
		{
			_putchar(65);
		}
		else if (i % 3 == 0)
		{
			_putchar(65);
		}
		else
		{
			_putchar(65);
		}
	}
	_putchar('\');
	return (0);
}
