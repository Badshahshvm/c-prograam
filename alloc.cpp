//using of dynamic memory allocation using calloc function;-
#include<stdio.h>
#include<stdlib.h>
int main()
{    int i,n,*ptr,sum;
printf("enter the number:-");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
printf("entere values:");
for(i=0;i<n;i++)
scanf("%d",(ptr+i));
printf("\nentered values:");
for(i=0;i<n;i++)
printf("%d\t",*(ptr+i));
sum=*(ptr+0)+*(ptr+1);
printf("sum is\n:-");
printf("%d\n",sum);
return 0;
}
