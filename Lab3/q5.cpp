#include <iostream>

using namespace std;

class employeeData{
    public:
    void setPara(){
        cout<<"Enter the year, employee id, bonus and total ovetime:";
        cin>>year;
        cin>>employeeId;
        cin>>totalBonus;
        cin>>totalOT;
    }
    void displayReport(){
        cout<<"An employee with ID "<<employeeId<<" has received Rs "<<totalBonus;
        cout<<" as a bonus and had worked "<<totalOT<<" hours as overtime in the year "<<year<<endl;
    }
    private:
    int employeeId,year;
    float totalBonus, totalOT;
};
int main(){
    employeeData e;
    e.setPara();
    e.displayReport();

}