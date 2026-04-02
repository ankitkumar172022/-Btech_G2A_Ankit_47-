#include<stdio.h>
int main(){
    int n,i,f,count=0;
    printf("enter the range of array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    count=count+arr[i];
    printf("the sum of the array element is %d ",count);
    return 0;
}
