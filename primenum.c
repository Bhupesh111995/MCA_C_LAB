#include<stdio.h>
void main()
{
	int num,flag=0;
	printf("Enter a number to check prime :");
	scanf("%d",&num);
	if(num>1)
	{
		if(num==2)
		{
			printf("2 is a prime number\n");		
		}	
		else
		{
			for(int i=2;i<=num/2;i++)
			{	
				if(num%i==0){
					flag=1;break;				
				}			
			}
			if(flag==1){
				printf("%d is not a prime number\n",num);
			}
			else
			{
				printf("%d is a prime number\n",num);
			}		
		}	
	}
	else{
		printf("enter the valid positive input greater than 1\n");
	}
}
