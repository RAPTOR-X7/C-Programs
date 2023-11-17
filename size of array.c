#include<stdio.h>
main()
{
	int a[5]={9,4,3,6,7};
	printf("%u %u %u %u %u", &a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("\n \n \n address of a = %u",a);
	printf("\n address of index 0 = %u",&a[0]);
	printf("\n address of array = %u",&a);


	printf("\n size of the array = %d", sizeof(a));	
}
	
	
