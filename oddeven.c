#include<stdio.h>

void main()
{
printf("\t\t\t*****Odd or Even*****\n");/*input values*/
/*Input*/
	int num;
	printf("Enter value :");
	scanf("%d",&num);
/*Process &Output*/
	printf("%d is %s\n",num,((num%2 == 0)?"even":"odd"));
}
