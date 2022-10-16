//print the pattern:-
#include<stdio.h>
int main()
{
	int i,j,n;
	int x=0,y=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("%d",y);
			}
			else
			{
				printf("%d",x);
			}
		}
		printf("\n");
	}
}
