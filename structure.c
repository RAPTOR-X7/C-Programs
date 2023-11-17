#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll_no ;
	float fee ;
};

main()
{
	int a ;
	struct student s1, s2, s3;
	/*
	s1.roll_no=12;
	s1.fee=62400;
	strcpy(s1.name,"Aman");
	strcpy(s2.name,"Aryan");
	s2.fee=70000;
	s2.roll_no=30;
	s3=s1;                //copy of one structure to another
	
	
	
	printf("The student 1 details are : %s %d %f \n", s1.name , s1.roll_no , s1.fee);
	printf("The student 2 details are : %s %d %f \n", s2.name , s2.roll_no , s2.fee);
	printf("The student 3 details are : %s %d %f \n", s3.name , s3.roll_no , s3.fee);
	*/
	
	
	// getting the name using scanf and gets
	
/*	gets(s3.name);
	scanf("%f",&s3.fee);
	scanf("%d",&s3.roll_no);
	
	printf("The student details are : %s %d %f \n",s3.name,s3.roll_no,s3.fee);
	
*/


// initialisation directly:

struct student s3 = {"Rajiv",6,5000.00};
	printf("The student details are : %s %d %f \n",s3.name,s3.roll_no,s3.fee);
	
	
// s6 can be initialised like this also :

/*struct student
{
	char name[20];
	int roll_no ;
	float fee ;
}; s6;
	
	}
