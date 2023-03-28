#include<stdio.h>
#include "main.h"
/**
 * print_array - prints half of a string
 * @a: array
 * @n:  is the number of elements
 */
void print_array(int *a, int n)
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
