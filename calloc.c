// syntax of calloc : void*calloc(n,size)

#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p, n , i ;
	n=5;              
	p=(int *)calloc(n, sizeof(int));
	
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
		
		printf("\n \n");
		
		for(i=0;i<n;i++)
		{
			printf("%d \t",*(p+i));
		}
		
// reallocation is used when 2nd allocation is more than 1st one
// passing zero as second argument is equivalent to free()


// void*realloc(pointer to object,n*(sizeof(int)))

p = (int*)realloc(p,n*(sizeof(int))); // n is the new value of allocation



	}
	
	printf("\n Every thing is same but the memory allocation is different from malloc \n its happening in the backend we cant see that ");

	free(p); // its deallocating the memory , here p is storing the values , so p is used as paarameters 



}
