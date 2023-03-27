#include <unistd.h>

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: The first number
 * @b: The second number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
