#include <iostream>
using namespace std;
struct date
{
    int dd, mm, yy;
} s1;

void printDate(date s); //passing structure to a function
int main()
{
    s1.dd = 28;
    s1.mm = 11;
    s1.yy = 2004;
    printDate(s1);
}
void printDate(date s1) 
{
    cout << "Today's date is: " << s1.mm << "/" << s1.dd << "/" << s1.yy << endl;
}