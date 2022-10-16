#include<stdio.h>
int main()
{

int n,i,j,arr[70];
printf("enter the number:-\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",arr[i]);
}
for(i=0;i<n-1;i++)
{
	int smallest=i;
	for(j=i+1;j<n;j++)
	{
		if(arr[smallest]>arr[j])
		{
			smallest=j;
		}
		
	}
	int temp=arr[smallest];
	arr[smallest]=arr[i];
	arr[i]=temp;
	}	
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

