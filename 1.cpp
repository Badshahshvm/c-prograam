//count the odd number or even number:-
#include<stdio.h>
int main()
{
	int i,a[5],even=0,odd;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		odd++;
		
	}
	printf("even is %d",even);
	printf("odd is %d",odd);
	return 0;
}

