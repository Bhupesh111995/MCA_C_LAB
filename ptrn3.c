#include<stdio.h>
void main()
{	int n,i,j,k,x=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");					
		}		
		for(j=1;j<=i;j++)
		{
			++x;
			printf(" %d",x);
		}	
		printf("\n");	
	}
}
