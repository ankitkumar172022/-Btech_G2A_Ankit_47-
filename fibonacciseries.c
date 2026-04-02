#include<stdio.h>
int main(){
    int n,a=1,b=1,sum=1;
    printf("enter your term = ");
    scanf("%d",&n);
    int x=n;
    while(n>2)
    {
    sum=a+b;
    a=b;
    b=sum;
    n--;
    }
    printf("the %d term of given fibonnaci series is %d",x,sum);
    return 0;
}