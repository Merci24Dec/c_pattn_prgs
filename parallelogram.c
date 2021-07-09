#include <stdio.h>

void main()
{
    int i, j, r;

    // Input number of rows from user
    scanf("%d", &r);

    for(i=1; i<=r; i++)
    {
        // Print trailing spaces 
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=r; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
