#include<stdio.h>
int main(){
    int n,i,rev=0,d;
    printf("enter your number = ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=(10*rev)+d;
        n=n/10;
    }
    printf("the reverse of the given number is %d",rev);
    return 0;
    
}