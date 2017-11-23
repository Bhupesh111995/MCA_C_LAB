#include<stdio.h>
void main()
{	int n,i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			flag++;
			printf(" %d",flag);
					
		}	
		printf("\n");	
	}
}
