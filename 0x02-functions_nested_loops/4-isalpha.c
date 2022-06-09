#include<stdio.h>

int main()
{
	char ab;
	printf("\n Enter ab:");
	scanf("%c", &ab);
	if(ab>='a' && ab <='z')
		printf("\nlower case\n ");
	else
	{
	if(ab>='A' && ab <='Z')
		printf("\nUpper case\n");
	else
		printf("\ninvalid character\n");
	}
	return (0);
}
