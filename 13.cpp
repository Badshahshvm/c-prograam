//print the transpose of any matrix using function:-
#include<stdio.h>
void tra(int a[2][3]);
int main()
{
	int i,j,a[2][3];
	printf("enter the elements in the matrix:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&a[i][j]);
			
		}
		
	}
	tra(a);
}
void tra(int a[2][3])
{
	int i,j;
	printf("\nmatrix is :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		
		}
		printf("\n");
	}
	printf("\ntranspose matrix is :-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
