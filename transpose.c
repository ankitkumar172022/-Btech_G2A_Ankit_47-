#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter the row of the matrix = ");
    scanf("%d",&r);
    printf("enter the column of the matrix = ");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the element of the matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        
            }
    }
    printf("the transpose of the matrix is\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
        printf("%d ",a[j][i]);
        }
        printf("\n");
    }
      return 0;
}