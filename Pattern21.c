#include<stdio.h>
int main()
{
	int i,j,k,rows;
	scanf("%d",&rows);
	k=1;
	for(i=1;i<=rows;i+=2)
	{
		for(j=rows;j>=1;j--)
			{
				if(j>i)
			        printf(" ");
				else
				    printf("%d ",k++);
			}
		printf("\n");
	}
	return 0;
}