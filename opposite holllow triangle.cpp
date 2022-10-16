//PRINT THE RECTANGLE:-
#include<stdio.h>
int main()
{
	int i,j,n,space;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(i==1||j==1||j==2*i-1||i==n)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
		for(i=n;i>=1;i--)
	{
		for(space=n-i;space>=1;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(i==1||j==1||j==2*i-1||i==n)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{ 
	
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=1;i<=n;i++)
	{     for(space=1;space<=n-i;space++)
	{
		printf(" ");
	}
	
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
