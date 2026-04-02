#include<stdio.h>
int main(){
    int r,c,i,j,sum=0;
    printf("enter the row of the matrix = ");
    scanf("%d",&r);
    printf("enter the column of the matrix = ");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the element of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe resultant matrix is \n ");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            if(i==j){
        sum+=a[i][j];
            }
        }
    }
    printf("the sum of the matrix is = %d ",sum);
     return 0;
}