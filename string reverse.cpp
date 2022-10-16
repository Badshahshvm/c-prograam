//reverse to the string:-
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[]="SHIVAM";
	char x;
	int count=0,i;
	while(ch[i]!='\0')
	{
		count++;
		i++;
	}
	printf("lenth of string is:-");
	printf("%d\n",count);
	for(i=0;i<count/2;i++)
	{
	    	x=ch[i];
	    	ch[i]=ch[count-1-i];
	    	ch[count-1-i]=x;
	}
	printf("%s",ch);
	return 0;
}
