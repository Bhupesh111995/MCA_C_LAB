#include<stdio.h>

void main()
{
printf("\t\t\t*****Mobile Service Bill*****\n");/*input values*/
/*Input*/
	int c,r;
	printf("Enter number of calls made :");
	scanf("%d",&c);
/*Process*/
	r=(c>100)?((c-100)*125+250):250;
/*Output*/
	printf("cost of %d calls is %d\n",c,r);
}
