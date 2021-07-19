#include<stdio.h>
int main() 
{
   int i,j,count=1,n;
   printf("Enter a number\n");
   scanf("%d",&n);
   //UPPER PART
   for(i=1;i<=n;i++)
   {   
      for(j=1;j<=i;j++)
      {
        if(j<i)
          printf("%d*",count++);
        else
          printf("%d",count++);
      }
       printf("\n");
   }
  //Lower part 
  count=count-n;
  for(i=n;i>=1;i--)
  {
     for(j=1;j<=i;j++)
     {
        if(j<i)
          printf("%d*",count++);
        else
          printf("%d",count++);
     }
     count=(count+1)-2*i;
     printf("\n");
   }
  return 0;
}
//o/p
/*
Enter a number

5

1

2*3

4*5*6

7*8*9*10

11*12*13*14*15

11*12*13*14*15

7*8*9*10

4*5*6

2*3

1



*/
