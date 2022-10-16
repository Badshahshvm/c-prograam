#include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int sum=0,i,n;
printf("enter the number:-");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+i;
}
printf("sum is %d",sum);

}

