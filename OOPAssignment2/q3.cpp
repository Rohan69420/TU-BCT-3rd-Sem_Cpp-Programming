#include <iostream>
#include <iomanip>
using namespace std;
class Measurement{
    private:
    float meter, feet;
    public:
    Measurement(){
        cout<<"Enter the distance in meter:"<<endl;
        cin>>meter;
        this->convertToFeet();
        this->Display();
    }
    void convertToFeet(){
        feet=meter*3.28089f;
    }
    void Display(){
        setprecision(2);
        cout<<meter<<" meters ="<<feet<<" feet";

    }
};
int main(){
    Measurement m;
    return 0;
}