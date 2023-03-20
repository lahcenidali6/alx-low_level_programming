#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		for (int j = 48; j < 57; j++)
		{
			for (int k = i; k <= 57; k++)
			{
				for (int l = j;l<57;l++){
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l + 1);
					if(i != 57 || j != 56)
					{
						putchar(32);
						putchar(44);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
