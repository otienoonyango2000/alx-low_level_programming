#include <stdio.h>

/*
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */


int main()
{       
	int a, b, c;
	
	printf("print different numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b && b > c)
	
		printf("%d is largest number.", a);

	
	if (b > a && a > c)
	
		printf("%d is largest number.", b);
	
	if(c > a && a > b)
	
		printf("%d is largest number.", c);
	

	return (0);
}
