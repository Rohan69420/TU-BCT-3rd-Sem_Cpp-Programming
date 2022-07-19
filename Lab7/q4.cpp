#include <iostream>
using namespace std;
class Vehicle { //need abstract or atleast virtual class for polymorphism
    private:
    int _veh_no;

    public:
    void setVN(int n){
        _veh_no=n;
    }
    int getVN(){
        return _veh_no;
    }
    
    virtual void displayVN() = 0; //pure virtual hence class is made abstract
};
class Bus : public Vehicle{
void displayVN(){
    cout<<getVN()<<endl;
}
};
class Car : public Vehicle{
void displayVN(){
    cout<<getVN()<<endl;
}
};
class Bike : public Vehicle{
void displayVN(){
    cout<<getVN()<<endl;
}
};
int main(){
    Bus b;
    Car c;
    Bike bi;
    Vehicle *vptr;
    //cout<<"1st type: "<<typeid(*vptr).name()<<endl;
    vptr=dynamic_cast<Bus*>(&b);
    vptr->setVN(1234);
    vptr->displayVN();
    cout<<"2st type: "<<typeid(*vptr).name()<<endl;
    vptr=dynamic_cast<Bike*>(&bi);
    vptr->setVN(3425);
    vptr->displayVN();
    cout<<"3rd type: "<<typeid(*vptr).name()<<endl;
    return 0;
}