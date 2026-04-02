#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter the row of the matrix = ");
    scanf("%d",&r);
    printf("enter the column of the matrix = ");
    scanf("%d",&c);
    int a[r][c],b[r][c];
    printf("enter the element of the matrix 1st\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of the matrix 2st \n ");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
        }
    }
    int res[r][c];
    printf("the resultant of the matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        res[i][j]=a[i][j]+b[i][j];
        printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}