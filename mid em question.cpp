//PRINT THE GIVEN SUM:-
#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y,n,sum=0,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	//y=pow(x,i);
	for(i=1;i<=n;i+=2)
	{   
	y=pow(2,i);
		fact=fact*i;
		sum=sum+y/fact;
	}
	printf("%d\n",sum);
	return 0;
}
