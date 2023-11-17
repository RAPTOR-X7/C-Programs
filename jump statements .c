#include<stdio.h>
main()
{
	int i;
	for(i=10; i<0; i=i-1)
	{
		if(i%2==1)
		{
		 continue; // for printing even numbers
	    }
		printf("%d",i);
	}
	
	
}
