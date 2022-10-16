//check number is armstrong or no:-
#include<stdio.h>
int main()
{
	int  i,r,n,result=0,fact=1;
	printf("enter the number:-");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
     	}  
		
		result=result+fact;
	     fact=1;
		n=n/10;
	
}
printf("%d\n",result);

	
	return 0;
}
