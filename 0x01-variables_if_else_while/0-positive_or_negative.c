#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand (time (0)) ;
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n){
		printf (" %d is positive " , n );
	}
	else {
		printf (" %d is negative ");
	}
	return (0);
}
