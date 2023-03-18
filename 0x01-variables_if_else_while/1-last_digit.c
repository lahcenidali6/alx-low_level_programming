#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, a, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n;
	while (a != 0){
		b = a;
		a = a%10;
	}
	printf("Last digit of %d is %d", n, b);
	if(b>5)
	{
		printf ("and is greater than 5\n");
	}
	else if(b == 0)
	{
		printf ("and is 0\n");
	}
	else if (b<6 && b!=6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
