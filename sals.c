#include<stdio.h>
void main()
{
	float sum=0,avg=0,max,min;
	float num[3];
	int i;
	/*input&process*/	
	for(i=1;i<=3;i++)
	{
		printf("Enter value of number-%d :",i+1);
		scanf("%f",&num[i]);
		sum=sum+num[i];
		avg=avg+sum/3;
	}	
	max=((num[1]>num[2])&&(num[1]>num[3]))?(num[1]):((num[2]>num[1])&&(num[2]>num[3]))?(num[2]):((num[3]>num[1])&&(num[3]>num[2])?(num[3]):0);
//	min=((num[1]<num[2])&&(num[1]<num[3]))?(num[1]):((num[2]<num[1])&&(num[2]<num[3]))?(num[2]):((num[3]<num[1])&&(num[3]<num[2])?(num[3]):0);
	min=((num[1]<num[2])&&(num[1]<num[3]))?(num[1]):((num[2]<num[3])?num[2]:num[3]);
	/*output*/
	printf("\n Sum\tAvg\tMax\tMin \n %.1f\t %.1f\t %.1f\t %.1f\n",sum,avg,max,min);

}
