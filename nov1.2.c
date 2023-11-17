//string handling
#include<string.h>
#include<stdio.h>
#include<conio.h>
main()
{
	char src[40]="lovel professionl university ";
	char dest[40]="is my university";
	int i=10;
//	strcpy(dest,src);
//	strncpy(dest,src,i);
//	strcat(src,dest);
	strncat(src,dest,i);
	printf("%s",src);
}
