//sorting of elements in ascending order:-
#include<stdio.h>
int main()
{
	int i,j,n,x,a[40];
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j){
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
			
		}
	}
	for(i=0;i<n;++i)
	{
		printf("%d",a[i]);
	}
	return 0;
}
