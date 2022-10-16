//printb the pyramid traingle:-
#include<stdio.h>
int main()
{
	int i,j,n,space=0;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=0;space<=n-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=n;i>=1;i--)
	{
		for(space=n-i;space>=0;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
