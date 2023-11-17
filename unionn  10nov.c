#include<stdio.h>
#include<string.h>
#include<stdlib.h>


union student{
	char name[20];
	int rollno;
	int age;
}s1;


struct teacher{
	char name[20];
	int rollno;
	int age;
}s2;


main()
{
strcpy(s1.name,"MahaRana");
	s1.rollno=1;
	printf("%s",s1.name);
	printf("%d",s1.rollno);
	printf("the size of union : %d\n",sizeof(s1));
	printf("The size of structure : %d",sizeof(s2));
	
	
	
		
}

