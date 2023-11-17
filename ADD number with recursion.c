#include<stdio.h>
int addnum(int);
main()
{
	int a=5;
	printf("enter the number : ");
	scanf("%d", &a);
	printf("\n the sum is : %d",addnum(a));
}

int addnum(int n)
{
	if (n==0)
	return n;
	else 
	return n+addnum(n-1);
}
