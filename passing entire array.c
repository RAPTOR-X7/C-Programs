#include<stdio.h>
void ref1(int [],int);
main()
{
	int a[6]={9,8,7,6,5,4};
	int size=6;
	ref1(a,6);
}

void ref1(int x[],int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d \n",x[i]);
	return 0;
}
