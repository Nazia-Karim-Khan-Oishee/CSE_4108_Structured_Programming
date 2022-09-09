#include<stdio.h>


int main ()
{
    int arr[5][5],score[5],average[5],colsum=0,rowsum=0,highest[5]= {0},avg=0,low[5], quizavg[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter Marks for student %d: ",i+1);
        for(int j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
            //low=arr[1][1];
            if(i==0)
            {
                low[j]=arr[i][j];
            }
            else
            {
                if(arr[i][j]<low[j])
                {
                    low[j]=arr[i][j];
                }
            }
            if(arr[i][j]>highest[j])///1>0
            {
                highest[j]=arr[i][j];///highest[0]=1
            }
            rowsum=rowsum+arr[i][j];
            //low[i]=lowest;
        }
        score[i]=rowsum;
        average[i]=(rowsum/5);
        rowsum=0;
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("Total score for student %d:", i+1);
        printf("%d\n",score[i]);

    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("Average score for student %d:", i+1);
        printf("%d\n",average[i]);

    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("Highest score for quiz %d:", i+1);
        printf("%d\n", highest[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("Lowest score for quiz %d:", i+1);
        printf("%d\n", low[i]);
    }
    printf("\n");
    for(int j=0;j<5;j++)
    {    printf("Average score for quiz %d:", j+1);
        for(int i=0;i<5;i++)
        {
            avg=avg+arr[i][j];
        }
        quizavg[j]=avg/5;
        avg=0;
        printf("%d\n", quizavg[j]);
    }


    return 0;
}

