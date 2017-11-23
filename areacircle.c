#include<stdio.h>
#define pi 3.14
void main()
{
	printf("\t\t\t*****Area Of Circle*****\nEnter the radius of the circle :");/*input values*/
	float r,ar ;/*radius,area*/	
	scanf("%f",&r);
	/*Process*/
	ar=pi*(r*r);
	/*output*/	
	printf("Area of circle with Radius: %f is %f\n",r,ar);
}
