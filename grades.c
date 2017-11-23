#include<stdio.h>
void main()
{
	float mc,mdms,mco,mu,mpce,mtwp;	
	float per;
	int i,j;
	printf("Enter the marks of C: ");scanf("%f",&mc);
	printf("Enter the marks of Maths: ");scanf("%f",&mdms);
	printf("Enter the marks of CO: ");scanf("%f",&mco);
	printf("Enter the marks of Unix: ");scanf("%f",&mu);
	printf("Enter the marks of PCE: ");scanf("%f",&mpce);
	printf("Enter the marks of WEB: ");scanf("%f",&mtwp);
	if(mc<40||mdms<40||mco<40||mu<40||mpce<40||mtwp<40)
		printf("Grade : F");
	else
	{
		per=(mc+mdms+mco+mu+mpce+mtwp)/6;
		printf("\n\nPercentage : %.2f\t",per);
		if(per>=90)
			printf("Grade : S+\n");
		else if(per>=80 && per<90)
			printf("Grade : S\n");
		else if(per>=70 && per<80)
			printf("Grade : A\n");
		else if(per>=60 && per<70)
			printf("Grade : B\n");
		else if(per>=50 && per<60)
			printf("Grade : C\n");
		else if(per>=45 && per<50)
			printf("Grade : D\n");
		else if(per>=40 && per<45)
			printf("Grade : E\n");
		else if(per<40)
			printf("Grade : F\n");
		else
			printf("Data input error");
	}
	

}
