//print the factorial:-
#include<stdio.h>
void fact();
int main()
{
	fact();
	
}
void fact()
{
	int i,fact=1,n;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("%d",fact);
	
}
