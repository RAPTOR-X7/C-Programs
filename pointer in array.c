#include<stdio.h>
main()
{
	int a;
	int *ptr ;
	a=7;
	ptr=&a;
	
	printf("a is %d \n",a);  // %d can be used but %u is for usigned integer
	printf("1. address of a is : %u \n",&a);  // %d can be used but %u is for address 
	printf("2. address of a through ptr is : %u \n\n", ptr);
	printf("since, 1 and 2 are same , so ptr is having same address as of a  ");
	
	printf("\nvalue of a through pointer : %d", *ptr); // *ptr means dereferencing
	printf("\naddress of pointer itself is : %u", &ptr);
	
}
