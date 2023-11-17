#include<stdio.h>
main()
{
	int a[2][2],m,n,i,j;
	
	printf("Enter the number of rows :");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	
	
	printf("Enter the elements : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	
	printf("\n \n ")
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d \t",a[i][j]);
	    }
	
	printf("\n");
	}
}
