#include <iostream>

class Tester {
    public:
    class T1{};
    class T2{};
    Tester(){
        try{
            this->throw1st();
        }
        catch(Tester::T1()){
            throw;
        }
    }
    void throw1st(){
        std::cout<<"Hello there."<<std::endl;
        throw T1();
    }
};
int main(){
    
    try{
    Tester t;
    }
    catch(...){
        std::cout<<"Eyy caught another one!"<<std::endl;
    }
    return 0;
}