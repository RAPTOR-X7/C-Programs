#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
main()
{
	char str1[20]="Hello World",a;
	int i;
	i = strlen(str1);   //gives the length os strings
	
	a=strrev(str1);     // for reversing
//	strupr(str1);      // for upper value
printf("%d",i);
printf("%s",a);
printf("%s", strupr(str1));

}
