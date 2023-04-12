#include "main.h"
#include <stdlib.h>

/**
 * char *create_array -  function that creates an array of chars
 * @size: the size
 * @c: the char
 * Return: pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
