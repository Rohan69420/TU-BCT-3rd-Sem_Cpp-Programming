#include <iostream>

using namespace std;

class carpark {
    private:
    int carId,charge_hour;
    float parkedTime;

    public:
    
    void setData(){
        cout<<"Enter the car ID, change per hour and parked time: "<<endl;
        cin>>carId;
        cin>>charge_hour;
        cin>>parkedTime;

    }
    void showData(){
        cout<<"Rate: Rs "<<charge_hour<<" per hour"<<endl;
        cout<<"Charge: Rs "<<charge_hour*parkedTime<<endl;
        cout<<"Car ID: "<<carId<<endl;
    }
    void setNshow(){
        setData();
        showData();
    }

};
int main(){
    carpark car;
    car.setNshow();
}