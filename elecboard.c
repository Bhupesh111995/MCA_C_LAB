#include<stdio.h>
void main()
{	/*input*/
	float unit,charge;
	printf("Enter the unit used :");
	scanf("%f",&unit);
	/*process*/
	if(unit<=0){
		printf("Enter the Valid input\n");	
	}
	else{
		if(unit>300){
			charge= (((unit-300)*1)+(100*0.9)+(200*0.8)+100);
		}	
		if(unit>200){
			charge=(((unit-200)*0.9)+(200*0.8)+100);		
		}
		if(unit<200){
			charge=unit*0.8+100;		
		}
		if(charge>400){
			charge=(((15/100)*charge)+charge);
		}
	/*output*/
		printf("Total Charge=%.2f\n",charge);
	}
}
