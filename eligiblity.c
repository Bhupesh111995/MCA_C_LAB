#include<stdio.h>
void main()
{
	float mat,phy,che;
	printf("Enter marks for MATHS PHYSICS CHEMISTRY : ");
	scanf("%f %f %f",&mat,&phy,&che);
	(((mat>=60)&&(phy>=50)&&(che>=40)&&(mat+phy+che>=200))||(mat+phy>=150))?printf("You are eligible for admission\n"):printf("not eligible\n");
	
}
