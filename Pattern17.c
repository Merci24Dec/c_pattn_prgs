#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1; i<N; i++)
    {
        for(j=N; j>i; j--)
        {
			if(i<N/2)
			    printf("%d", i);
			else
			    printf("%d",N-i);
        }

        printf("\n");
    }

    return 0;
}