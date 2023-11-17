#include<stdio.h>
main()
{
	int arr[10];
	int i,a,sum1=0;
	
	printf("Enter the range of array : ");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	 {
	 	printf("Enter value at index %d : ",i);
	 	scanf("%d",&arr[i]);
	 }
	 
	 for(i=0;i<a;i++)
	 {
	 
	 	sum1=sum1+arr[i];
	 }
	 
	printf("sum = %d",sum1);
}
