#include<stdio.h>
int main(){
    int age;
    printf("enter the age of the person = ");
    scanf("%d", &age);
    if(age<18){
        printf("not eligible to vote");
    }
    else
    printf("eligible to vote");
    return 0;
}