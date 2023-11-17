// default value for calloc is zero
// default value for malloc is garbage
// void * malloc(size) .............................(1)

#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p, n , i ;
	n=5;              //the int type values we want to use
	p=(int *)malloc(20); // from line (1) 
	// we are using int because 'p' was integer
	// syntax for dynamic memory allocation in malloc
	// int a,b,c,d,e ; --> its static
	// in dynamic , the system will allocate memory upto which is required whether we have declared 5 integers
	// but in static memory its permanently reserving memory for 5 integers ,  so its a waste of space
	
	// line 11 can be written as :
	p=(int *)malloc(n*(sizeof(int)));
	
	if(p==NULL)    //if we're allocating memory and there is no memory left like memory is consumed by other application
	{
		printf("not sufficient memory \n");
		exit(1);
	}
	
	else
	{
		printf("Enter values to be done by DMA \n");
		
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d \t",*(p+i));
		}
	}

	
}
