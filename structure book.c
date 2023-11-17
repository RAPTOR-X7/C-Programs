#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
	{
		char bookname[20];
		int page;
		float price ;
	};
	
main()
{
	struct book mybook[100];
	int i, n;
	n = 2 ; // number of records
	for(i=0;i<n;i++)
	{
		printf("Enter book name : \n ");
		gets(mybook[i].bookname);
		printf("Enter book pages \n");
		scanf("%d", &mybook[i].page);
	}
}
