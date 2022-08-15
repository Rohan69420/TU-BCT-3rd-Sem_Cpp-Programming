//here we attempting default argument and overload
#include <iostream>

class Test{
    public:
    void displaySum(int a=2, int b=3){
        std::cout<<"Sum: "<<a+b<<std::endl;
    }
    void displaySum(int a=3,char b='z', int c=5){
        std::cout<<"Sum: "<<a+c<<std::endl;
    }
};
int main(){
    Test t;
    t.displaySum(5,4);
    t.displaySum(5,'d',7);
    return 0;
}