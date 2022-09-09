#include<stdio.h>

void selection_sort(int arr[],int n)
{
    int temp;
    if(n==0)
    {
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[n-1])///6 1 3 5  -> 5 1 3 6 -> *3 1 5 6  -> *1 3 5 6
        {
            temp=arr[n-1];
            arr[n-1]=arr[i];
            arr[i]=temp;

        }
        ///5 1 3 6   3 1 5 6   1 3 5 6
    }
    return selection_sort(arr,n-1);///5 1 3    *3 1

}
int main()
{

    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("Sorted array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
