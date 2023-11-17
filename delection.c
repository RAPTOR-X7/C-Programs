#include<stdio.h>
main()
{
	int i,x[10],n, index=3 , value=9 ;
	printf("Enter the size of element : ");
	scanf("%d",&n);
	printf("\n \n ENTER THE ELEMENTS : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	
	for(i=index;i<n;i++)
	{
		x[i]=x[i+1];
	}
	
	n--; 
	
	
	
	
	
	 printf("\n The array is : ");
	 for(i=0;i<n;i++)
	 {
	 
	 printf("%d \t",x[i]);
	}
	
	
	
	
	
	
}
