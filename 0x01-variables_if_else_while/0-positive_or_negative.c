#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;



	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	/* your code goes here */
	return (0);





}	
