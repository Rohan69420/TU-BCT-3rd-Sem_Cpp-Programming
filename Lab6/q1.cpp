#include <iostream>

class Distance{
    private:
    int meter, centimeter;
    float fmeter;
    public:
    Distance(int m, int c):meter(m),centimeter(c){
        std::cout<<"Input meter: "<<m<<" centimeter: "<<c<<std::endl;
    }
    Distance(float m):fmeter(m){
       std::cout<<"Input floating meter: "<<m<<std::endl;
       meter=(int)fmeter;
       centimeter=(int) (fmeter*100)%100;

    }
    operator float(){
        return meter + centimeter/100.0f;
    }
    void displayMCm(){
        std::cout<<"Meter: "<<meter<<" Centimeter: "<<centimeter<<std::endl;
    }
};
int main(){
    Distance dist(4,26),d(4.26f);
    std::cout<<"Converted:"<<float(dist)<<std::endl; //should work
    d.displayMCm();
}