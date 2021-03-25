printf("\nSPIRAL MATRIX : ")
    int k=0,l=0;
    while(k<m && l<m)
    {
        for(i=l;i<n;i++)
        {
            printf("%d",arr[k][i]);
        }
    k++;
        for(i=k;i<m;i++)
        {
            printf("%d",arr[i][n-1]);
        }
    n--;   
    }
    if(k<m)
    {
        for(i=n-1;i>=0;--i)
        {
            printf("%d",arr[m-1][i]);
        }
    m--;    
    }
    if(l<n)
    {
        for(i=m-1;i>=k;i--)
        {
            printf("%d",arr[i][l]);
        }
    l++;  