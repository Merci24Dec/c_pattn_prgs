#include<stdio.h>
int main()
{
int n,first=1,second=2,next,c;
printf("Enter the number of terms\n");
scanf("%d",&n);
printf("First %d terms of fibonacci series are:\n",n);
for(c=1;c<n;c++)
{
printf("%d, ",first);
next=first+second;
first=second;
second=next;
}
return 0;
}
