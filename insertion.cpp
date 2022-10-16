//insertion of element:-
#include<stdio.h>
int main()
{
	int i,position,value,n;
	int a[50];
	printf("enter the number:-");
	scanf("%d",&n);
	printf("enter the value:");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position:-");
	scanf("%d",&position);

		for(i=n-1;i>=position-1;i--)
		{
			a[i+1]=a[i];
			a[position-1]=value;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
