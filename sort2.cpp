//insertion sort
#include<stdio.h>
int main()
{
	int arr[80],i,j,n;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		int current=arr[i];
		j=i-1;
		while(j>=0&&current<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1]=current;
		}
		for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
		return 0;
	}

