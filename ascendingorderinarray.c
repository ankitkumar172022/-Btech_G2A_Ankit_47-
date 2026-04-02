#include<stdio.h>
int main(){
    int i,j,temp,arr[5]={54,648,16,75,815};
    int n=5;
    for(i=0;i<n;i++)
    {
    printf("%d  ",arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
        if(arr[j]<arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d  ",arr[i]);
    }
    return 0;

}