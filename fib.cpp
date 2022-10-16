//PRINT THE FIBONACCI SERIES:-
#include<stdio.h>
int main()
{
	int i,n,fib,a=0,b=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    printf("%d\t",a);
	fib=a+b;
	a=b;
	b=fib;
}
return 0;
}
