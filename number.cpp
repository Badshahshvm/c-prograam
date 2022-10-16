//primt the length of string:-
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,fact=1;
	char num[]="123";
	while(num[i]!='\0')

		{
			count++;
			i++;
		}
		//printf("count is %d",count);
		printf("lenth of number:-");
	printf("%d\n",count);
	for(i=1;i<=3;i++)
	{
		fact=fact*i;
	}
	printf("no of possible way:-");
	printf("%d",fact);
	
	
	return 0;
}
