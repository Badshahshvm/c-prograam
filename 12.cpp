//print the matrix using function:-
#include<stdio.h>
int mat(int a[3][3],int b[3][3],int c[3][3]);
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3],x;
	printf("enter element in matrix a\n:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elemnts in b:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	x=mat(c);
	printf("%d",x);
	
}
int mat(int a[3][3],int b[3][3],int c[3][3])
{ 
int i,j;

printf("sum of matrix a nad b is\n:-");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}
}
