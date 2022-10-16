#include<stdio.h>
int main()
{
	int n,i,j,space;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			printf("%c",65+i);
		}
		for(space=1;space<=i-1;space++)
		{
			printf(" ");
			
		}
		printf("\n");
		
	}
	printf("\n")
	return 0;
}
