#include<stdio.h>
main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={9,8,7,6};
	int c[2][2]={4,5,6};
	int d[2][2]={0};
	int e[][2]={1,2,3};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \t",a[i][j]);
		if(j=2)
		{
			printf("\n");
		}
		//printf("\n");  can also be used to display the next row in next line
	}
	
	
	
	
	printf("\n \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \t",b[i][j]);
		printf("\n");
		
	}
	
	
	
	printf("\n \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \t",c[i][j]);
		printf("\n");
		
	}
	
	
	
	printf("\n \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \t",d[i][j]);
		printf("\n");
		
	}
	
	
	
	printf("\n \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \t",e[i][j]);
		printf("\n");
		
	}
	
}
