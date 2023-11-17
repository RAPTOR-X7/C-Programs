#include<stdio.h>
main()
{
	int x[5], i , key, loc=-1;  // -1 means not successful or not found , when something is not executed compiler returns -1
	printf("Enter the elements of array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);

	}
	key=3;	
	for(i=0;i<5;i++)
	{
		if(x[i]==key)
		{
		printf("\n Key found : %d",key);
		printf("\n The index is : %d", i);
		printf("\n The position is : %d",i+1);
		}
	}
  
}
