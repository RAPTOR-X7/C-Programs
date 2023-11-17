#include<stdio.h>
main()
{
	int *ptr=NULL; // here it is pointing to no address
	int *ptrr = 0 ; // it is same as null 
	
	printf(" The value at ptr : %d", *ptr);
 	printf(" The address at ptr : %d", ptr);	
	
}
