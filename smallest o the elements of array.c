#include<stdio.h>
main()
{
	int a,i;
	
	printf("Enter the length : ");
	scanf("%d",&a);
	
	int x[a];
	for(i=0;i<a;i++)
		{
			printf("\n Enter the element %d : ",&i);
			scanf("%d",&x[i]);
		}
		
		printf("\n \n \n ");
	for(i=0;i<a;i++)
	{
	printf("%d",x[i]);
}
	printf("\n \n \n \n");
	
	
	int smallest;
	smallest = x[0];
	for(i=0;i<a;i++)
	{
		if(x[i]<smallest)
		{
			smallest=x[i] ;
		}
	}
	printf("The smallest is %d",smallest);
	
	printf("\n \n");
	int largest;
	largest = x[0];
	for(i=0;i<a;i++)
	{
		 if(x[i]>largest)
		 {
		 	largest=x[i];
		 }
	}
	printf("The largest is : %d", largest);
}


