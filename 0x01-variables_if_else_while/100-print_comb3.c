#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 48;i <=57 ;i++)
	{
		for (int j = i;j < 57;j++)
		{
			putchar(i);
			putchar(j+1);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			 }
		}
	}
	putchar('\n');
	return (0);
}
