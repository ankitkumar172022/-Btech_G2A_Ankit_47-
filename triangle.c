#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first side of the triangle = ");
    scanf("%d" , &a);
    printf("enter second side of the triangle = ");
    scanf("%d" , &b);
    printf("enter third side of the triangle = ");
    scanf("%d" , &c);
    if((a+b)>c && (b+c)>a && (c+a)>b){

        if(a==b && b==c && c==a)
        printf("equilateral triangle");
        if(a!=b && b!=c && c!=a)
        printf("scalene triangle");
        else
        printf("isoceles triangle");
    }
    else
        printf("invalid triangle");  
}