#include<stdio.h>
void main()
{
printf("\t\t\t*****Printing Bill*****\n");
/*Inputs*/
	float rsri,rssu;/*Price of rice and sugar*/
	printf("Enter the price of Rice ------1kg (in Rs) :");
	scanf("%f",&rsri);
	printf("Enter the price of Sugar ------1kg (in Rs) :");
	scanf("%f",&rssu);

/*Outputs*/
	printf("\t\t\t*****lIST OF ITEMS*****\n\t\t\tItem\tPrice\n\t\t\tRice\tRs.%.2f\n\t\t\tSugar\tRs.%.2f\n",rsri,rssu);

}
