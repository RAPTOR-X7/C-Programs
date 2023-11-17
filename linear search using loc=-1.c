// linear search using loc = -1

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
			loc=i;
			break;
		}
	}
		
		if(loc!=-1)
		{
			printf("Element is found at location : %d",loc+1);
		}
		
			else 
			{
			printf("Element not found");
	  		}
}


// error : output is not coming as i think loop is not entering
