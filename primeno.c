#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter your number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
    count=1;
    break;
    }
}
    if(n==1)
    printf("1 is neither prime nor composite");
    else if(count==0)
    printf("given number is prime");
    else
    printf("given number is composite");
    return 0;
    
}