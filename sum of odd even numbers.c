// sum of odd numbers
#include<stdio.h>
main()
{
	int a[5]={4,5,6,7,8},i,sumo=0, sume=0;
	for(i=0;i<4;i++)
	{
		
		if(a[i]%2!=0)
		sumo=sumo+a[i];
		else 
		 continue ;
	}
	printf("Sum of odd numbers = %d \n",sumo);
	
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d",a[i]);
		sume=sume+a[i];
		}
		else 
		 continue ;
	}
	printf("Sum of even numbers = %d", sume);
}




/*
// easier and short code for above code
#include<stdio.h>
main()
{
	int a[5]={4,5,6,7,8},i,sumo=0, sume=0;
	for(i=0;i<=4;i++)
	{
		
		if(a[i]%2!=0)
	   	sumo=sumo+a[i];
		else 
		 {
		 sume=sume+a[i];
		}
		
	}
	printf("Sum of evens is = %d \n" ,sume);
	printf("Sum of odds is = %d" ,sumo);
	
}
*/


