#include<stdio.h>
void main()
{
	int num ,sum ,div;
	num =100;
	sum=0;div=0;
	while(num<=200){
		if(num%7==0)
		{
			div++;
			sum+=num;
		}
		num++;
	}
	printf("Number betweeen 100-200 \ndivisible by 7: %d \n sum : %d\n",div,sum);

}
