#include<stdio.h>


int main ()
{
    int arr[5][5],result1[5],result2[5],colsum=0,rowsum=0;

    for(int i=0; i<5; i++)
    {
        printf("Enter Row %d: ",i+1);
        for(int j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
            rowsum=rowsum+arr[i][j];
        }
        result1[i]=rowsum;
        rowsum=0;
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            colsum=colsum+arr[j][i];
        }
        result2[i]=colsum;
        colsum=0;
    }
    printf("\n");
    printf("Row totals : ");
    for(int i=0; i<5; i++)
    {
        printf("%d ",result1[i]);
    }
    printf("\n");
    printf("Column totals: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ",result2[i]);
    }

    return 0;
}
