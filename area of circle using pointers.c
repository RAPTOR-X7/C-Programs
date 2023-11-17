#include<stdio.h>
main()
{
	double radius, area=0;
	double *pradius = &radius, *parea= &area;
	
	*pradius=10;
	
	
	
	*parea=3.14*(*pradius)*(*pradius);  // we can do it directly but we r doing it with help of pointers
	printf("radius = %.2lf  area = %.2lf",*pradius, *parea);
}
