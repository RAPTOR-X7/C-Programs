#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char name[20];
	int id ;
	int marks[4];
};

main()
{
	int i;
	struct student s1={"Rajiv",1,{100,99,98,97}};
	printf("Name : %s \nid : %d \n\n",s1.name,s1.id);
	
	for(i=0;i<4;i++)
	{
	printf("marks %d : %d \n",i,s1.marks[i]);
	}
		
}
