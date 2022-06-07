#include <iostream>
using namespace std;
inline float netPayment(float salary){
    return salary-.1*salary;
}
int main(){
    float salary;
    cout<<"Enter the employee salary:";
    cin>>salary;
    cout<<endl;
    cout<<"The net payment is "<<netPayment(salary)<<endl;
}
