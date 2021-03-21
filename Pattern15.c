#include<stdio.h>
int main()
{
	int i,j,row;
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			printf("%d*",i);
			else
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=row-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			printf("%d*",i);
			else
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

	









/**
#include <stdio.h>

int main()
{
int i,j,k,N,count=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
k=1;
for(j=0;j<i;j++)
{
printf("%d",i);
if(k<i)
{
printf("*");
k=k+1;
}
}
printf("\n");
}
for(i=N-1;i>0;i--)
{
k=1;
for(j=0;j<i;j++)
{
printf("%d",i);
if(k<i)
{
printf("*");
k=k+1;
}
}
printf("\n");
}
return 0;
}
**/

