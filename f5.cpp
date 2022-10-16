//print the fibonacci series:-
#include<stdio.h>
int fib(int );
int main()
{
	int n,x;
	printf("enter the number:-");
	scanf("%d",&n);
	x=fib(n);
	printf("%d",x);
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
