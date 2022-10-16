#include<stdio.h>
int main()
{
	int i,j,even=0,odd=0,a[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{     
		      printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				even++;
			}
			else
			odd++;
		}
	}
	printf("even is %d",even);
	printf("odd is %d",odd);
	return 0;
	}
