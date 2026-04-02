#include<stdio.h>
int main(){
    int n,i,count=0,d;
    printf("enter your number = ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;  
        count++;
        n=n/10;
    }
    printf("the number of digit in the the given number is %d",count);
    return 0;
    
}