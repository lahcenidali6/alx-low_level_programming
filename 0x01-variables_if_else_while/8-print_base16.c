#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, a = 97;

	while (i <= 58)
	{
		putchar(i);
		i++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
