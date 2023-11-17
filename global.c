#include<stdio.h>
void mystatic();
extern int n=9;
int y=5;
main()
{
	int w;
	  static int x=8, m;
	  auto int k;
	  printf("m=%d",m);
	 mystatic();
	 mystatic();
}

void mystatic()
{
	static int j=5;   //is static keyword is removed then output will be 5 and 5
	printf("\n value of static variable inside function is %d",j);
	j++;
	
}
