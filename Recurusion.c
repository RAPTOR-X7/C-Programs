//Recursion

#include<stdio.h>
int fact(int);
main()
{
	int n ;
	printf("Enter the number : ");
	scanf("%d \n",&n);
	printf("factorial of n is %d",fact(n));
}

 int fact(int n)   //here n in defining function is different from n in calling function
 {
 	if(n==0 || n==1)
 	  return 1;
 	else
 	 return n*fact(n-1);
 }
