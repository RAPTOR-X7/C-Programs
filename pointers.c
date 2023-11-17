#include<stdio.h>
void swap1(int*,int*);
main()
{
	int a,b;
	a=4;
	b=8;
	printf(" a = %d and b = %d",a ,b );
	swap1(&a,&b);
	printf("\n after swapping the  values are a=%d , b=%d", a ,b);
}
void swap1(int *x, int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("values after modification x=%d and y=%d", *x,*y);
}
