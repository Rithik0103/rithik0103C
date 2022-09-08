#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter user name : ");
	scanf("%s",&a);
	printf("ReEnter user name: ");
	scanf("%s",&b);
	if(strcmp(a,b)==0)
	{
		printf("...Valid Input...");
	}
	else
	{
		printf("...Invalid Input...");
	}
}
