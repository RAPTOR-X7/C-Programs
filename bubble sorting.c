#include<stdio.h>
int swap(int,int);
main()
{
	int x[5], n=5, i , j , hold;
	printf("Enter the elements :" );
	for(i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
	}
	printf("\n The elements are : ");
	for(i=0;i<n;i++)
	 printf("%d \t",x[i]);
	 
	 
	 
	 //loop to control the number of passes
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
		 	if(x[j]>x[j+1])
	 			{
	 			 hold=x[j];
	 			 x[j]=x[j+1];
	 			 x[j+1]=hold;
				}
		}
		printf(" \n the elements after bubble sort : \t");
		for(i=0;i<n;i++)
		{
			printf("%d \t",x[i]);
		}
	 }
}

int swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	return (x,y);
}
