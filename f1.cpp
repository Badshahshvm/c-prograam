//print the sumof two number usin function:-
#include<stdio.h>
void sum();
int main()
{
   sum();
}
void sum()
{
	int a,b,sum;
	printf("enter the number:-");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}
