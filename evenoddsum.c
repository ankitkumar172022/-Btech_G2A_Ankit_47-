#include<stdio.h>
int main(){
    int n,i,odd=0,even=0;
    printf("enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the ekement of the array \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(arr[i]%2==0){
         even=even+arr[i];
         }
    
         else{
         odd=odd+arr[i];
         }
    }
    printf("sum of even element in the array is %d\n",even);
    printf("sum of odd element in the array is %d\n",odd);
}