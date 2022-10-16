//truct:-
#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
};
int main()
{   
	struct student s1;
	s1={15,"shivam"};
	printf("%d\n",s1.rollno);
	printf("%s",s1.name);
	return 0;
}
