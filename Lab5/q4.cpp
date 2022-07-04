#include <iostream>

class Date
{
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    void operator++()
    { // prefix
        ++day;
        if (month != 2)
        {
            if (day > 30)
            {
                day %= 30;
                ++month;
                if (month > 12)
                {
                    month %= 12;
                    ++year;
                }
            }
        }
        else
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                if (day > 29)
                {
                    day %= 29;
                    ++month;
                    if (month > 12)
                    {
                        month %= 12;
                        ++year;
                    }
                }
            }
            else{
                if (day > 28)
                {
                    day %= 28;
                    ++month;
                    if (month > 12)
                    {
                        month %= 12;
                        ++year;
                    }
                }
            }
        }
        
    }
    void operator++(int){//postfix
    day++;
        if (month != 2)
        {
            if (day > 30)
            {
                day %= 30;
                month++;
                if (month > 12)
                {
                    month %= 12;
                    year++;
                }
            }
        }
        else
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                if (day > 29)
                {
                    day %= 29;
                    month++;
                    if (month > 12)
                    {
                        month %= 12;
                        year++;
                    }
                }
            }
            else{
                if (day > 28)
                {
                    day %= 28;
                    month++;
                    if (month > 12)
                    {
                        month %= 12;
                        year++;
                    }
                }
            }
        }
        }
        void displayDate(){
            std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
        }
};
int main(){
    Date d(27,2,2000);
    ++d;
    d.displayDate();
    d++;
    d.displayDate();
}