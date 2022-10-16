//armstrong number:-
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		sum=sum+pow(i,3);
		n=n/10;
		
	}
	printf("%d\n",sum);
	if(sum==n)
	{
		printf("armstrong number");
	}
	else
	printf("no");
}
