//print the sum of prime number:-
#include<stdio.h>
void prime();
int main()
{
	prime();
}
void prime()
{
	int i,sum=0,n;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i==0)
		{
		
		printf("not prime\n");
	}
		else 
		printf("yes\n");
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
