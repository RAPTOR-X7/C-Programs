#include<stdio.h>
main()
{
	int b[2][2]={1,2,3,4};
	int a[2][2],m,n,i,j;
	int c[2][2];
	
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
	
	printf("\n \n ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d \t",a[i][j]);
	    }
	
	printf("\n");
	}
	
	printf("\n \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d \t",b[i][j]);
	    }
	
	printf("\n");
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
	    }
	}
	
	printf("\n \n The sum of both matrices is :\n\n ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d \t",c[i][j]);
	    }
	
	printf("\n");
	}
	
	
}
