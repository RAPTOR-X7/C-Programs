#include<stdio.h>
main()
{
	int a[5];
	int *p, i;
	printf("Enter the elements : ");
	p=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",/*&a[i]*/ p+i);
	}
	
// initialised at line 7 , p=a; // here p=&a not written because , a in a[5] is the address for the first element of the array , and if we want second element then we should write p=&a[1];
//p=&a[0];  it is same as previous line
    printf("\n \n ");
    printf("The array is :");
	for(i=0;i<5;i++)
	printf(" %d \t",*p+i);
}
