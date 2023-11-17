#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]={"My University is : "};
	char s2[20]={"LPU"};
	//strcpy(s1,s2);
	//strncpy(s1,s2,2);  //copying only 2 characters
	strcat(s1,s2); //concatination
	printf("%s \n",s1); 
	strncat(s1,s2,3);
	printf("%s",s1);
	    
}
