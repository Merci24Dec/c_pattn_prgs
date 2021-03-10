#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	
	if(n%2!=0)
	{
    for(i = 0;i <= n/2;i++)
    {
	for(j = 0; j < n; j++)
	{
		if(j >= (n/2 - i)  && j <= (n/2 + i))
			printf("%c", '*');
		else
			printf("%c", '-');
	}
	printf("\n");
    }
    return 0;
}
	else
	{
	printf("Invalid Input");
	}
	return 0;
}