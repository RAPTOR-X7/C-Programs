//with return and without parameter

#include<stdio.h>
int sum1();
main()
{
	int c;
	c=sum1(2,5);
	printf("\n %d",c);
	
	/* or,
	 sum1();
	 printf("\n %d", sum1()); */
}

int sum1(int x, int y)
{
	int z;
	z=x+y;
	//printf("in the function only %d", z);
	return z;
}
