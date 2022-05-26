#include <stdio.h>
#include <stdlib.h>

struct companyData
{
    int monthlyExpenditure[12];
    int sum;
} *years;
int main()
{
    int start_date, end_date,diff_years;
    printf("\nEnter start year and end year");
    scanf("%d %d",&start_date,&end_date);
    diff_years=end_date-start_date;
    years=(struct companyData *)malloc(sizeof(struct companyData)*diff_years);
    for (int i = 0; i < diff_years; i++)
    {
        for (int j=0; j<12;j++){
        printf("\nEnter the expenditure of year %d and month %d:",start_date+i,j+1);
        scanf("%d",&companyData[i].month[j]);

        }

    }
}