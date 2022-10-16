//print the string:-
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[25];
	int leng1,leng2;
	printf("enter the string:");
	gets(a);
	gets(b);
	puts(a);
	puts(b);
	leng1=strlen(a);
	printf("leng1 is %d",leng1);
	leng2=strlen(b);
	printf("leng2 is %d",leng2);
	
	return 0;
}
