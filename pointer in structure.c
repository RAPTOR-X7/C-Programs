#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
	{
		char bname[20];
		int page ;
	};
	
main()
{
	struct book mybook={"abc",20};
	struct book *bptr ;  // pointer to mybook
	bptr = &mybook;
	printf("book name : %s and book pages : %d \n",mybook.bname,mybook.page); // normal way
	printf("using pointer , book name : %s and book pages : %d \n",bptr->bname,bptr->page);
	printf("using pointer , book name : %s and book pages : %d \n",(*bptr).bname,(*bptr).page);
}
