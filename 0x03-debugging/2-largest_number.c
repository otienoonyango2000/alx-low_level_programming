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
	double int a, int b, int c;
	
	printf("print different numbers: ");
	scanf("%1f %1f %1f", &int a, &int b, &int c);

	if(a > b && b > c)
	{
		printf("%.2f is largest number.", int a);

	}
	else if (b > a && a > c)
	{
		printf("%.2f is largest number.", int b);
	}
	else
	{
		printf("%.2f is largest number.", int c);
	}

	return (0);
}
