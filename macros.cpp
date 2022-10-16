//MAROS
#include<stdio.h>
int main()
{
	printf("\nDate:%s",__DATE__);
	printf("\ntime:%s",__TIME__);
	printf("\nfile:%s",__FILE__);
	printf("\nline:%d",__LINE__);
	printf("\nANSI:%d",__STDC__);
	return 0;
}
