#include<stdio.h>
int kuriyama(int arr[],int l)
{

    int i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]>l && arr[i-1]<l )
        {
            return i+1;
        }

        i++;
    }
    return i+1;

}

int main()
{

    int n,l,i;
    scanf("%d",&n);
    int arr[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&l);
    printf("%d",kuriyama(arr,l));
    return 0;
}

