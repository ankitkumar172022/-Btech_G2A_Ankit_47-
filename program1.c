#include<stdio.h>
int main(){
    float a,b,c,d,e,percentage,sum;
    printf("enter first subject number = ");
    scanf("%f", &a);
    printf("\n enter second subject number = ");
    scanf("%f", &b);
    printf("\n enter third subject number = ");
    scanf("%f", &c);
    printf("\n enter fourth subject number = ");
    scanf("%f", &d);
    printf("\n enter fifth subject number = ");
    scanf("%f", &e);
    sum = (a+b+c+d+e);
    printf("\n the sum of the number is = %f" , sum);
    percentage = ((a+b+c+d+e)/500)*100;
    printf("\n percentage is = %f" , percentage);
    return 0;





}