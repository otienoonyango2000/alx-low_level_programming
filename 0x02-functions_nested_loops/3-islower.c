#include<stdio.h>

int main()
{
	char ab;
	printf("\n Enter ab.");
	scanf("%c", & ab);
	if(ab>='a' && ab<='z')
		printf("\n lower case");
	else
	{
	printf("\n invalid character");
	}
	return (0);
}
