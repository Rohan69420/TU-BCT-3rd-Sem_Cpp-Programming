#include <iostream>
using namespace std;
class liquidMetrics{
    private:
    float liters,gallons;
    public:
    liquidMetrics(){
        cout<<"Enter volume in litres:"<<endl;
        cin>>liters;
        this->convertToGallons();
        this->display();
    }
    void convertToGallons(){
        gallons=liters*0.26417f;
    }
    void display(){
        cout<<liters <<" litres is: "<<gallons<<" gallons"<<endl;
    }
};
int main(){
    liquidMetrics lm;
    return 0;
}