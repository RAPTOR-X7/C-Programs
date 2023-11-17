#include<stdio.h>
main()
{
	int arr[10];
	int i,a;
	
	printf("Enter the range of array : ");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	 {
	 	printf("Enter value at index %d : ",i);
	 	scanf("%d",&arr[i]);
	 }
	 
	 for(i=0;i<a;i++)
	 {
	 	printf("The array is : %d \n", arr[i]);
	 }
	
}
