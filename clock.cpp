//create a clock:-
#include<stdio.h>
int main()
{
	int i,h,m,s;
	
	printf("enter the time in hh;mm;ss");
	scanf("\n\n\t\t%d%d%d",&h,&m,&s);
//	printf("\n\n\t\tsunday to mon 2022");
	//start;
	while(1)
	{
	
	for(h=0;h<24;h++)
	{
		for(m=0;m<60;m++)
		{
			for(s=1;s<60;s++)
			{
				printf("%d%d%d",h,s,m);
				if(h<12){
					printf("am");
				}
				else
				printf("pm");
				for( i=1;i<3619999;i++){
				
			
			}
			}
			s=0;
		}
		m=0;
	}
	h=0;
	//go to start;
}
	return 0;
	
}
