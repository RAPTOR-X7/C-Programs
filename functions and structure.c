#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	int age ;
};

void fun(struct student s1);
main()
{
	struct student s1={1,21};
	fun(s1);
}

void fun(struct student x)
{
	printf("%d \n",x.age);
	printf("%d \n",x.rollno);
}
