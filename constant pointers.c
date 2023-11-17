#include<stdio.h>
main()
{
	int a=20,b=30;
	int *const ptr=&a;
	ptr =&b;    // here it shows error because it is violating the basic working of the pointer
	printf("%d \n", *ptr);
	printf("%d \n", ptr);
}
