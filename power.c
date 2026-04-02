#include<stdio.h>
int main(){
    int b,p,i,n=1;
    printf("enter the base = ");
    scanf("%d",&b);
    printf("\n enter the power of the number = ");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
    n=n*b;
    }
    printf("%d raise to the base %d is %d",p,b,n);
    return 0;
}
