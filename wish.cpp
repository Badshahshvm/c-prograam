#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<16;i++)
	{
		textcolor(i);
		cprintf("***HAPPY ENGINEER'S DAY***");
	}
	getch();
}
