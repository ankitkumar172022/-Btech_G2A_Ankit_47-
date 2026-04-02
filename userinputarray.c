#include<stdio.h>
int main(){
    int n,i;
    printf("enter the range of array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("the %d element of the array is %d\n",i,arr[i]);
    }
    return 0;

}
