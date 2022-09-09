#include <stdio.h>

void maxmin(int a[],int n,int *largest,int *smallest)
{
    int k=0, j=0;
    for (int i=0; i<n ; i++)
    {
        if (a[i]>a[k])
        {
            k=i;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]<a[j])
        {
            j=i;
        }
    }
    *largest=k;
    *smallest=j;
}
int main( )
{
    int arr[10],largest,smallest;
    printf("Enter 10 numbers: ");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxmin(arr,10,&largest,&smallest);
    printf("Max position: %d\n", largest+1);
    printf("Min position: %d\n", smallest+1);
    return 0;
}
