#include<stdio.h>
#include<string.h>

union student
{
	char name[20];
	int regno;
};

main()
{
	union student s1={"abc",2};
	
	printf("%d\n",s1.regno);
	printf("%s\n",s1.name);
	printf("%d\n",sizeof(s1));
}
