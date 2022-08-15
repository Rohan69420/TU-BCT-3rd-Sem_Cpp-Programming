#include <iostream>

class Base{
    public:
    int a;
    void display(){
        std::cout<<"This is from the base class";
    }
};
class Derived : public Base{
    public:
    int a;
    
    void display(){
        std::cout<<"This function is overridden!";
    }
    void ambigious(){
        std::cout<<a;
    }
};
int main(){
    Derived d;
    d.display();
    d.Base::display();
    d.ambigious();
    return 0;
}
