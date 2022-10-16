//gate questions:-
#include<stdio.h>
void f(int *p, int m);
void main()
{
	int i=5,j=10;
	f(&i,j);
	printf("%d",i+j);
}
void f(int *p,int m)
{
	m=m+5;
	*p=*p+m;
}
