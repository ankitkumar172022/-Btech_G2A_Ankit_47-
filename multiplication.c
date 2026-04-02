#include <stdio.h>
int main()
{
    int m, n, p, q, i, j, k;
    printf("enter the row of the 1st matrix = ");
    scanf("%d", &m);
    printf("enter the column of the 1st matrix = ");
    scanf("%d", &n);
    printf("enter the row of the 2nd matrix = ");
    scanf("%d", &p);
    printf("enter the column of the 2nd matrix = ");
    scanf("%d", &q);
    int a[m][n];
    printf("enter the element of the 1st matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    int b[p][q];
    printf("enter the element of the 2nd matrix\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    int res[m][q];
    if (n != p)
    {
        printf("matrix multiplication is not possible");
    }

    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                res[i][j] = 0;

                for (k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("the resultant matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}