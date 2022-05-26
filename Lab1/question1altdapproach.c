#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mExpenditure[12],*sum;
    int start_date, end_date, diff_years;
    printf("\nEnter start year and end year");
    scanf("%d %d", &start_date, &end_date);
    diff_years = end_date - start_date;
    mExpenditure = (int *)malloc(sizeof(mExpenditure) * diff_years);
    sum=(int *)malloc(sizeof(int)*diff_years);
    for (int i = 0; i < diff_years; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("\nEnter the expenditure of year %d and month %d:", start_date + i, j + 1);
            scanf("%d", mExpenditure[i][j]);
            sum[i]=0;
            sum[i]+=mExpenditure[i][j];

        }
    }
    return 0;
}