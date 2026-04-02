#include<stdio.h>
int main(){
    int i,arr[5]={6,3,8,25,7};
    int n=5,brr[5];
    printf("original array\n");
    for(i=0;i<n;i++)
    {
      printf("%d   ",arr[i]);  
    }
    for(i=0;i<n;i++)
    {
    brr[i]=arr[4-i];
    }
    printf("\nreverse array\n");
    for(i=0;i<n;i++)
    {
    printf("%d  ",brr[i]);
    }
    return 0;
}