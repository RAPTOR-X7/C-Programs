#include<stdio.h>
extern int a=5;
main()
{
	printf("\n showing extern variable a = %d",a);
	{
		int a=9;   // if its disabled then a is 5 as a is global
		printf("\n showing inside block a = %d",a);
	}
}
