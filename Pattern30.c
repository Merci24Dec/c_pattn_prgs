#include <stdio.h>
void main()
{
    int i,j,r,c=0;
    scanf("%d",&r);
    for(i=r;i>=0;i--)
    {
        c+=i;
    }
    for(i=0;i<r;i++)
    {
        for(j=r;j>i;j--)
        {
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
}
/*
4

10 9 8 7 

6 5 4 

3 2 

1 


*/
