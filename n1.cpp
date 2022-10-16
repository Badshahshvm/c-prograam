#include<stdio.h>
#include<string.h>
void replaceSubstring(char[], char[], char[]);
int main()
{
	 char string[100],sub[100],new_str[100];

	replaceSubstring(string,sub,new_str);
	printf("%s",string);
	
}
void replaceSubstring(char[], char[], char[])
{	char string[100],sub[100],new_str[100];
	scanf("%s\n",string);
	scanf("%s\n",sub);
	scanf("%s\n",new_str);
	
	
}

