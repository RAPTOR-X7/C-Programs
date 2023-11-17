#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char str1[5]="HELLO",str2[5]="HELLO", str3[5]="hello";
	int i ;
	i = strcmp(str1,str2);
	printf("The value of i after comparision is : %d \n",i);
	i = strcmp(str1,str3);
	printf("The value of i after comparision is : %d",i);
	 
    strcmp(str1,str2,2);   //used for comparing first two elements of strings
	
	
}
