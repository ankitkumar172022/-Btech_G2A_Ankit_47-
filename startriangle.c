#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number of rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    int a=1;
        for(j=1;j<=n+1-i;j++)
        {
            char ch=(char)(a+64);
         printf("%c ",ch); 
         a++;  
           
        }
        printf("\n");
    }
    return 0;
}