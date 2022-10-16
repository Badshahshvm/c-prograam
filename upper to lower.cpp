//convert lower to upper case:
#include<stdio.h>
int main()
{
	char  ch[]="MUZAFFARPUR INSTITUTTE OF TECHNOLOGY";
	int i=0;
	for(i=0;i!='\0';i++)
	{
		if(ch[i]>=65&&ch[i]<=90)
		{
		ch=ch[i]+32;
		}
	}
	printf("string is:-");
	printf("%s",ch);
	return 0;
}
