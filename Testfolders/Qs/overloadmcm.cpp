#include <iostream>
class Centimeter;
class Meter{
    private:
    float m;
public:
Meter(float mtr):m(mtr){}
friend bool operator<(Meter &, Centimeter &);
};
class Centimeter{
    private:
    float cm;
    public:
    Centimeter(float cme):cm(cme){}
friend bool operator<(Meter &, Centimeter &);
};
bool operator<(Meter &M,Centimeter &C){
    if (M.m*100<C.cm){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Meter met(2.5f);
    Centimeter centi(210.5f);
    if(met<centi){
        std::cout<<"Yes meter is smaller than centimeter!"<<std::endl;
    }
    else{
        std::cout<<"No meter is not smaller than centimeter!"<<std::endl;
    }
    return 0;
}