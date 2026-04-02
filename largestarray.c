#include<stdio.h>
int main(){
    int n,i;
    printf("enter the range of th array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int cout=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[0])
        arr[0]=arr[i];
        cout=arr[i];
    }
    printf("the largest element of the array is %d",cout);
    return 0;
}
