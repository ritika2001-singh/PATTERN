#include<stdio.h>
int main ()
{
	int i,j,N;
	printf("enter the value of n:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
			{
				if(j%2==1)
				{
					printf("01");
					
				}
				else
				{
					printf("01");
				}
				
			}
			printf("\n");
		
	}
	
	return 0;
}
