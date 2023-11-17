#include<stdio.h>
main()
{
	char name1[20];
	scanf("%s",name1); //no need to give & sign beacuse its an array and it automatically points to first element
	printf("%s",name1);
	
	// if there is space in between in the words of input
	// then it will terminate from the first space i.e. after the first word
	// so we use gets and puts
	
	gets(name1);
	puts(name1);
}
