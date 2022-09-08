#include<stdio.h>
int main()
{
	int a[20],i,j,k,n;
	printf("enter array limit=");
	scanf("%d",&n);
	printf("enter array elements=");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements={");
	for(i=0;i<=(n-1);i++)
	{
		printf("%d,",a[i]);
	}
	printf("}");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				n--;
				
			}
		}
	}
	printf("\n\narray after duplicate(s) removed : {");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	printf("}");
}
