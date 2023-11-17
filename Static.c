#include<stdio.h>
void fun();
main()
{
	fun();
	fun();
	fun();
}

void fun()
{
	int a =10;
	static int b=10;
	printf("\n a=%d b=%d",a,b);
	a++;
	b++;
}
