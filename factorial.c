#include<stdio.h>
int main()
{
	int fact=1,i;
	char num;
	printf("Enter value : ");
	scanf("%c",&num);
	if(num>0)
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("Factorial = %d",fact);
	}
	else
	{	
		printf("INVALID INPUT...");
	}
}
