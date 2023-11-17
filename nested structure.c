#include<stdio.h>
#include<string.h>
struct result{
	float marks;
	//here, if variable of student struct is declared then compiler will show error , because till now compiler doesnt know what a student is
};

struct student{
	int id;
	struct result r1;
};


main()
{
	struct student s1;
	s1.id=1;
	s1.r1.marks=99;
	printf("%d\n",s1.id);
	printf("%f\n",s1.r1.marks);
	
	
	
	
	
}
