#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mExpenditure,*sum,average=0;
    int start_date, end_date, diff_years;
    printf("\nEnter start year and end year");
    scanf("%d %d", &start_date, &end_date);
    diff_years = end_date - start_date;
    mExpenditure =(int **)malloc(sizeof(int*)* (diff_years+1));
    sum=(int *)malloc(sizeof(float)*diff_years);
    for (int i = 0; i <= diff_years; i++)
    {
        mExpenditure[i]=(int *)malloc(sizeof(int)*12);
        for (int j = 0; j < 12; j++)
        {
            printf("\nEnter the expenditure of year %d and month %d:", start_date + i, j + 1);
            scanf("%d",&mExpenditure[i][j]);
            sum[i]=0;
            sum[i]+=mExpenditure[i][j];
        }
        average+=sum[i];
    }
    average/=12;

    //output sequence
    //table header print sequence;
    printf("Date\tJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sum Average\n");

    for (int i = 0; i <= diff_years; i++)
    {
        printf("%d\t",start_date+i);
        for (int j=0;j<12;j++){
            printf(" %d",mExpenditure[i][j]);
            
        }
        printf(" \t%d\n",sum[i]);
    }
    printf("Average: %d",average);
    return 0;
}