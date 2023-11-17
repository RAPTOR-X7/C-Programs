#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i=0,j;
	char s[20]="Im a student";
	
	char temp;
	
	j=strlen(s)-1;
	 while(i<j)
	 {
	 	temp=s[i];
	 	s[i]=s[j];
	 	s[j]=temp;
	 	
	 	i++;
	 	j--;
	 }
	
	printf("%s",s);
	
	
	
}
