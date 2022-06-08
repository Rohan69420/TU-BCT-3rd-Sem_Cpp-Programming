#include <iostream>

using namespace std;

float updateSalary(float salary=18000.0, float inc=.12);

int main(){
    float ceo=35000,io=25000,sa=24000,pro=18000;
    cout<<"The salary in 2009 was: "<<endl;
    cout<<"CEO Rs"<<ceo<<endl;
    cout<<"Information officer Rs"<<io<<endl;
    cout<<"System analyst Rs"<<sa<<endl;
    cout<<"Programmer Rs"<<pro<<endl;

    cout<<"In the year 2010:"<<endl;
    cout<<"CEO Rs"<<updateSalary(ceo,.09)<<endl;
    cout<<"Information officer Rs"<<updateSalary(io,.1)<<endl;
    cout<<"System analyst Rs"<<updateSalary(sa)<<endl;
    cout<<"Programmer Rs"<<updateSalary()<<endl;
}
float updateSalary(float salary, float inc){
    return salary+inc*salary;
}