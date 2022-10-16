//print the new pattern:-
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i==j)
			{
				printf("%c",65+i);
			}
			else
			printf("0\t");
		}
		printf("\n");
	}
}
