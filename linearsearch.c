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
    printf("enter the number to be found = ");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(arr[i]==f)
        {
        count=1;
        break;
        }
    }
    if(count==0)
    printf("the number is not present in the array list");
    if(count==1)
    printf("the number is present in the array list");
    return 0;
}
