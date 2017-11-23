#include<stdio.h>
void main()
{	int n,i,j,flag=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",flag);
			flag=(flag==1)?0:1;		
		}	
		printf("\n");	
	}
}
