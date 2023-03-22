#include "main.h"
/**
 * print_times_table - function that print the 9 times table, starting with 0
 *
 *@n: The number of repeats of the table
 */
void print_times_table(int n)
{
	 int i, number, index;

	 if(n >= 0 && n <= 15)
	 {
		 for (i = 0; i <= n; i++)
		 {
			 index = 0;
			 for (number = 0; number <= n; number++)
			 {
				 index = i * number;
				 if ((index / 10) != 0)
				 {
					 _putchar((index / 10) + '0');
				 }
				 _putchar((index % 10) + '0');
				 if (number != 9)
				 {
					 _putchar(44);
					 _putchar(32);
					 if (((i * (number + 1)) / 10) == 0)
					 {
						 _putchar(32);
					 }
				 }
			 }
			 _putchar('\n');
		 }
	 }
}
