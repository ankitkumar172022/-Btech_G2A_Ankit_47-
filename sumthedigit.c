#include<stdio.h>
int main(){
    int n,i,sum=0,d;
    printf("enter your number = ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("the sum of digit in the the given number is %d",sum);
    return 0;
    
}