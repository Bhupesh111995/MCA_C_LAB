#include<stdio.h>
#include<math.h>
void main()
{
printf("\t\t\t*****Distance Between Coordinates*****\n");
/*Inputs*/
	float xa,xb,ya,yb,dis;/*x,y coordinate,distance*/
	printf("Enter the cordinate values for 1st point (values must be 2 digits) :");
	scanf("%2f %2f",&xa,&ya);
	printf("Enter the cordinate values for 2nd point (values must be 2 digits) :");
	scanf("%2f %2f",&xb,&yb);
/*Process*/
	dis=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
/*Output*/
printf("Distance between given two points is %f\n",dis);
}
