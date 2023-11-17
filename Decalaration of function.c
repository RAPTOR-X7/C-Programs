#include<stdio.h>
sum(int,int);
sub(int,int);
main()
{
	sum(1,2);
	sum(3,2);
	sum(4,5);
	
	
	sub(4,3);
}

sum(int x, int y)
{
	int c=x+y;
	printf("\n %d",c);
}

sub(int x , int y)
{
	int z=x-y ;
	printf("\n the subracted value is : %d",z);
}
