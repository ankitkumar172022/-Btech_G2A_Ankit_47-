#include<stdio.h>
int main(){
    int n,i,fac=1,d;
    printf("enter your number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("the factorial of the given number is %d",fac);
    return 0;
    
}