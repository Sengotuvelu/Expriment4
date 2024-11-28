#include<stdio.h>
void main()
{
    int n,i,j,sym=1;
    printf("size of the matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Enter matrix element:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                sym=0;
                break;
            }
        }
        if(!sym)
        {
            break;
        }
    }
    if(sym)
    {
        printf("Given matrix is symmetric\n");
    }
    else
    {
        printf("given matrix is not a symmetric matrix\n");
    }
}