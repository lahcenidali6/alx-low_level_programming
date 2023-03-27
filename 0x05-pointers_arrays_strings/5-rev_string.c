#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: The string to revers
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int i = 0, j = len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
