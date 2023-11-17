#incinclude<stdio.h>
main()
{
	int a[5]={9,4,3,6,7};
	printf("%u %u %u %u %u", &a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("\n \n \n address of a = %u",a);
	printf("\n address of index 0 = %u",&a[0]);
	printf("\n address of array = %u",&a);
	}
	
	
	
	//the ddiffernce between the address of the 1st index and the second one is 4 
	// so the bytes of one integer is 4 bytes 
	// hence the second element address can be calculated by adding 4 to 1st element address
	// similary +4 to second element address gives the address of third element
