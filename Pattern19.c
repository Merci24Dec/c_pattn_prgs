
#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(i % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}