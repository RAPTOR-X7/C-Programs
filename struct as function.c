#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	int age ;
};

struct student fun(struct student s);
main()
{
	struct student s8;
	struct student s1={1,21};
	s8=fun(s1);
	printf("%d \n",s8.age);
	printf("%d \n",s8.rollno);
}

struct student fun(struct student s4)
{
	struct student s6;
	printf("%d \n",s4.age);
	printf("%d \n",s4.rollno);
	s6.age=22;
	s6.rollno=3;
	return s6;
}















