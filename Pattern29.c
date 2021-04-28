#include<stdio.h>
#include<math.h>
int main()
{
int n,first=1,c,next;
printf("Enter the number of terms\n");
scanf("%d",&n);
printf("First %d terms of series are:\n",n);
for(c=1;c<n;c++)
{
next=(pow(first,2)+5);
printf("%d, ",next);
first++;
}
return 0;
}
