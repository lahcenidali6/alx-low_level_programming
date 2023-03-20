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
			k = j;
			while(k < 56)
			{
				putchar(i);
				putchar(j+1);
				putchar(k+2);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
