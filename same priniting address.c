#include<stdio.h>
main()
{
	int arr[3]={1,2,3};
	printf("%d %d %d ", arr, &arr[0], &arr);
}

//All the outputs are same because they mean the same 
// address of the array is the index 0 address
