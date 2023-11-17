#include<stdio.h>
main()
{
	int a =25;
	int *ptr ;
	int **ptr1 ; // called as pointer to pointer or double pointer
	
	ptr=&a;
	ptr1=&ptr;
	
	printf(" The value of variable a = %d \n",a);
	printf(" The address of a = %d \n", &a);
	printf(" the value stored at ptr by using pointer = %d \n",*ptr);
	printf(" the value of address of ptr = %d \n",ptr);
	printf(" the address of ptr = %d \n",&ptr);
	printf(" the value stored at ptr1 by using double pointer= %d \n",**ptr1);
	printf(" the value of address of ptr1 = %d \n",ptr1);
	printf(" the address of ptr1 = %d \n",&ptr1);
	
}
