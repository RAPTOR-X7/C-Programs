#include<stdio.h>
#include<string.h>

struct student{
	int regno;
		struct result{
			float marks;
		}r1;
};

main()
{
	struct student s1;
	s1.regno=1;
	s1.r1.marks=99;
	printf("%d\n",s1.regno);
	printf("%f\n",s1.r1.marks);
}
