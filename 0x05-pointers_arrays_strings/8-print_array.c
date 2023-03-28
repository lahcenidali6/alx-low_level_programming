#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
