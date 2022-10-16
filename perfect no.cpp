//check the number is perfect or not:-
//perfect number is sum of all factor itself:-
#include<stdio.h>
int main()
{
	int i,r,n,sum=0;
	printf("enter the number:-");
	scanf("%d",&n);

	//	r=n%10;
		for(i=1;i<n;i++)
		{
			r=n%i;
			if(r==0)
			{
			
			sum=sum+i;
		}
		}
	
	printf("%d\n",sum);
	if(sum==n)
	{
		printf("perfect no");
		
	}
	else
	printf("no");
	return 0;
}
