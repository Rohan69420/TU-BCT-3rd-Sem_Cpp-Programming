#include <iostream>
using namespace std;

void overloadedFunction(float ft=1.00, float inches=12.00); //passing default arguments

int main(){
    char info;
    float ft,inches;
    cout<<"Do you want to enter data? (y/n)"<<endl;
    cin>>info;
    if (info=='y'){
        cout<<"Enter the measurement in feet:";
        cin>>ft;
        overloadedFunction(ft,-1.0);
    }
    else
    overloadedFunction();


}
void overloadedFunction(float ft,float inches){
    if (inches==12.00)
    cout<<"The value of "<<ft<<" ft is "<<inches<<" inches"<<endl;
    else 
    cout<<"The value of "<<ft<<" ft is "<<ft*12<<" inches"<<endl;
}