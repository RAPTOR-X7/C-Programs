#include<stdio.h>
void swap1(int *x , int *y);
main()
{
	int a=8,b=9;
	swap1(&a,&b);
	printf("values of a and b after swap are : \n a = %d b = %d", a ,b);
}

void swap1(int *x,int *y)
{
	int temp ;
	int *ptemp= &temp;
	*ptemp = *x;
	*x=*y;
	*y= *ptemp;
}

// in this code we are using the address to swao the values 
// here changes are permanent
// here we are working on the actual values and not in copy of the values


