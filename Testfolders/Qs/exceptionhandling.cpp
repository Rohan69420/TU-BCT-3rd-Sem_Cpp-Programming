#include <iostream>

class Y {
    public:
    class Zero{};
    class Negative{};
    float root (int a,int b, int c){
        if (a==0){
            throw Zero();
        }
        std::cout<<"Made it past this!"<<std::endl;
        if (c>0){
            throw Negative();
        }
        return (float)(b*b-4*a*c);
    }
};
int main(){
    Y y;
    try{
        y.root(0,1,2);
    } 
    catch (Y::Negative){
        std::cout<<"This is negative exception"<<std::endl;
    }
    catch (Y::Zero){
        std::cout<<"This is zero exception"<<std::endl;
    }
   
    return 0;
}