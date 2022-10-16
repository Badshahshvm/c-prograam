#include <stdio.h>

int main() {
	
	int x,y;
	printf("enter the price of cab\n:");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
	    printf("travel with y price of cab");
	}
	else if(x==y)
	{
	    printf("travel with any cab:");
	}
	else
	printf("travel with x price of cab:");
	return 0;
}
