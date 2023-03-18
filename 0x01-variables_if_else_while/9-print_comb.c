#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(32);
		if(i != 58)
		{
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
