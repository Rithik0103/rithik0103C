#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,tem,a[20];
	printf("Enter array limit : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		tem=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tem;
	}
	printf("Reverse array elements={");
	for(i=0;i<=(n-1);i++)
	{
		printf("%d,",a[i]);
	}
	printf("}");
}
