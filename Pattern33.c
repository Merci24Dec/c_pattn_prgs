#include<stdio.h>
int main()
{
    int i,sp,st,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=(n-i);sp++)
           printf(" ");
           
        for(st=1;st<=(2*i)-1;st++)
           printf("*");
           
        printf("\n");
    }
    return 0;
}
/*
5

    *

   ***

  *****

 *******

*********


*/
