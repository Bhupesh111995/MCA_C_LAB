#include<stdio.h>
#include<math.h>

void main()
{
	printf("\t\t\t*****Area Of Triangle*****\n");
	/*input values*/
	float sa,sb,sc,s,ar ;/*side 1,side2,side3,s,area*/
	printf("Enter the 1st of the Triangle :");	
	scanf("%f",&sa);
	printf("Enter the 2nd of the Triangle :");	
	scanf("%f",&sb);
	printf("Enter the 3rd of the Triangle :");	
	scanf("%f",&sc);
	/*Process*/
	s=sa+sb+sc;
	ar=sqrt(s*(s-sa)*(s-sb)*(s-sc));
	/*output*/	
	printf("Area of Given Triangle is %f\n",ar);
}
