#include<stdio.h>
int main(){
    int age;
    printf("enter the age of the person = ");
    scanf("%d", &age);
    if(age>=0 && age<=12){
        printf("child");
    }
    if(age>=13 && age<=17){
        printf("teen");
    }
    if(age>=18 && age<=60){
        printf("adult");
    } 
    if(age>=60){
        printf("senior citizen"); 
    }  
    return 0;
}