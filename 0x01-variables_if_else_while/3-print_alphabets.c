#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97, a = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
