#include<stdio.h>
void main()
{
printf("\t\t\t*****2-Float Sum to Int*****\n");
/*Inputs*/
	float num1,num2;
	int sum;
	printf("Enter the 1st float value   :");
	scanf("%f",&num1);
	printf("Enter the 2nd float value   :");
	scanf("%f",&num2);
/*Process*/
	sum=num1+num2;
/*Outputs*/
	printf("  Float     Integer\n");
	printf("%.2f + %.2f = %d\n",num1,num2,sum);

}
