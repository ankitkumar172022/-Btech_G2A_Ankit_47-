#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t;
    float si,ci,amount;
    printf("enter the principal = \n rate = \n and time = \n");
    scanf("%d%d%d", &p,&r,&t);
    si=(p*r*t)/100;
    printf("SI = %f\n " , si);
    amount = p*pow((1+(r/100.0)),t);
    ci = amount - p;
    printf("\n CI = %f" , ci);
    return 0;

} 