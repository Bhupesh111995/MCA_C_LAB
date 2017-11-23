#include<stdio.h>

void main()
{
printf("\t\t\t*****Sum of Digits of 4 Digit Number*****\n");/*input values*/
/*Input*/
	int num,sum;
	printf("Enter the 4 Digit Value :");
	scanf("%d",&num);
	sum=0;
/*Process*/
	sum=sum+(num%10);
	sum=sum+((num/10)%10);
	sum=sum+((num/100)%10);
	sum=sum+((num/100)%10);
/*Output*/
	printf("Sum of Digits of %d is %d\n",num,sum);
}
