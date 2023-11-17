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
	
	
	for(i=n;i>=3;i--)
	{
		x[i+1]=x[i];
	}
	x[index]=value;
	n++; // if n++ is not there then it will show only 5 elements
	
	
	
	
	
	 printf("\n The array is : ");
	 for(i=0;i<n;i++)
	 {
	 
	 printf("%d \t",x[i]);
	}
	
	
	
	
	
	
}
