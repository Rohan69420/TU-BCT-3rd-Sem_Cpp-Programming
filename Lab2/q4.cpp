#include <iostream>
using namespace std;
float &passByreference(float *T1, float *T2){
    if (T1>T2){
        return *T1;
    }
    else
    return *T2;
}
int main(){
    float temp1,temp2,val;
    cout<<"Enter the value of temperature 1, temperature 2 and the value:";
    cin>>temp1;
    cin>>temp2;
    cin>>val;
    passByreference(&temp1,&temp2)=val;   //return by reference and pass by reference 
    cout<<endl;
    cout<<"The value of temp 1 and temp 2 are "<<temp1<<" and "<<temp2;

}