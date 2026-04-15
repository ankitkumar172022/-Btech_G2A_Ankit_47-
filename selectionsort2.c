#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,j,temp;
    printf("enter the range of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("original unsorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int minidx=-1;
        for(j=i;j<=n-1;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                minidx=j;
            }
        }
        temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
        printf("\n");
    }
    printf("\nsorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;

}