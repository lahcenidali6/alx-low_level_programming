#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j;

	while (i <= 57)
	{
		j = i;
		while (j < 57)
		{
			putchar(i);
			putchar(j + 1);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
