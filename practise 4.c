//palindrome check

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i=0,j;
	char s[20]="Im a student";
	char s2[20];
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
	if (strcmp(s,s2)=0)
	{
		printf("Its a palindrome");
	}
	
	else if (strcmp(s,s2));
	printf("Not palindrome");
	else(strcmp(s,s2));
	printf("Not palindrome");
	
	
	
}
