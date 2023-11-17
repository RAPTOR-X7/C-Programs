#include<stdio.h>
int *p1,*p2, *p3, *p4;
int i=10 , j=2;
int a[5]={1,3,5,7,9};

main()
{
	int m, n, x, y, z;
	p1=&i;
	p2=&j;
	p3=&a[1];
	p4=&a[3];
	
	m=p4-p3;
	printf("%d \n",m); // this shows how much far away are they from each other , here it says "2" , this means they are two elements far away from each other
	
	//n=p3+p4;
	//printf("%d \n",n); // this is not a valid operation beacuse addition doesn't mean anything , so its showing error
	
	
	x=*p3+1;
	printf("%d \n",x); // because its derefrencing it and adding 1 to the value
	
	
	p3=p3+1;              // here p3 is pointer now , its holding address, so +1 to a pointer makes it to move to next address 
	printf("%d \n", *p3); // here its printing the value at the next address because p3 is dereferenced 
	
	
	
	if(p4>p3)
	{
		printf("hi");
	}
	
	
}
