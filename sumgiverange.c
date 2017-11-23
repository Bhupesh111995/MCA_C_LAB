#include<stdio.h>
void main()
{
	int num ,sum ,div,n1,n2;
	printf("Enter the range 'n1 n2':");
	scanf("%d %d",&n1,&n2);
	if(n1>n2){
		printf("starting limit must be less than ending limit\n");
	}
	else{
	num =n1;
	sum=0;div=0;
	while(num<=n2){
		if((num%6==0)&&(num%4!=0))
		{
			div++;
			sum+=num;
		}
		num++;
	}
	printf("Number betweeen %d-%d divisible by 6 but not by 4\n: %d \n sum : %d\n",n1,n2,div,sum);
}
}
