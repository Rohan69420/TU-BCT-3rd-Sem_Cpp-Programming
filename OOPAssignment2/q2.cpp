#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Coordinates{
private:
    float x, y,r,theta;

public:
    Coordinates(){
        cout<<"Enter the x and y cartesian coordinates:"<<endl;
        cin>>x;
        cin>>y;
        this->convertToPolar();
        this->display();
    }
    void convertToPolar(){
        r=pow(x*x+y*y,0.5);
        theta=atan(y/x);
    }
    void display(){
        setprecision(2);
        cout<<"("<<x<<","<<y<<")"<<"="<<"("<<r<<","<<theta<<")"<<endl;
    }


};
int main(){
    Coordinates c;
    return 0;
}