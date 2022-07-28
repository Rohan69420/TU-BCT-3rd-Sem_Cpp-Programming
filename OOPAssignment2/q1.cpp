#include <iostream>
using namespace std;
class DataConversion{
    private:
    char decision;
    float kg, pound;

    public:
    DataConversion(){ //we're gonna use "this" pointer today yay!
        cout<<"Enter the weight in kgs:"<<endl;
        cin>>kg;
        this->convertToPounds();
        this->showData();
    }
    void convertToPounds(){
        pound=kg*2.2046f;
    }
    void showData(){
        cout<<kg<<" kg is "<<pound<<" pounds";
    }
};
int main(){
    DataConversion d;
    return 0;
}