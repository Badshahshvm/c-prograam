//print the stick:-
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
