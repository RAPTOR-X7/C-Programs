#include<stdio.h>
void fun1()
{
	auto int a=10;   // if we dont write auto then also by default its auto only
	printf("\nfun1 output = %d",a);
}

void fun2()
{
	auto int a=20;
	printf("\nfun2 output = %d",a);
}

void fun3()
{
	auto int a=30;
	printf("\nfun3 output = %d",a);
}

main()
{
	int a=30 ;
	printf("\noutput a in main = %d",a);
	fun1();
	fun2();
}
