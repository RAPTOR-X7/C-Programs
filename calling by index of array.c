#include<stdio.h>
void ref1(int );
main()
{
	int a[6]={9,8,7,6,5,4};
	int index;
	printf("Enter the index :");
	scanf("%d",&index);
	ref1(a[index]);
}

void ref1(int x)
{
	
	printf("%d \n",x);
	return 0;
}
