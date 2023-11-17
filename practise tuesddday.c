#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[15]="Im a student";
	printf("The length of string is : %d\n",strlen(s));
	printf("The reverse order is : %s\n",strrev(s));
	printf("The reverse order is : %s\n",strrev(s));
	printf("The lower case is : %s\n",strlwr(s));
	printf("The upper case is : %s\n", strupr(s));
}
