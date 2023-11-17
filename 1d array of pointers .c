// Array of pointer

#include<stdio.h>
main()
{
	int a[3]={1,2,3};
	int *p[3], i;
	for(i=0;i<3;i++)
	{
		p[i]=&a[i];
	}
	
	
	printf("The elements are : ");
	for(i=0;i<3;i++)
	printf("%d \t",*p[i]);
}
