//print the maximum number:-
#include<stdio.h>
int main()
{
	int a,b,maximum;
	printf("enter the number:-");
	scanf("%d%d",&a,&b);
	maximum=a>b?a:b;
	printf("max is %d",maximum);
	return 0;
	
}
