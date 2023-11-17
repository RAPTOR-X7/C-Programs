//with return and without parameter

#include<stdio.h>
int sum1();
main()
{
	int c;
	c=sum1();
	printf("\n %d",c);
	
	/* or,
	 sum1();
	 printf("\n %d", sum1()); */
}

int sum1()
{
	int x=5, y=10, z;
	z=x+y;
	//printf("in the function only %d", z);
	return z;
}
