#include<stdio.h>
main()
{
	printf("%d \n",890);
	printf("%d \n",-890);
	printf("%+d \n",890);	// or printf("+%d \n", 890) , printf("+%d \n",-890); then output is +-890
	printf("%e \n", 8.890);
	printf("%G \n", 8.890);
	printf("%6d \n",123);   // width specifier
	printf("%06d \n",123);
	printf("%-06d \n",123);  //minus means rectification, minus says ignore everything and move everything to left
	printf("%-6d \n",123);
	
}
