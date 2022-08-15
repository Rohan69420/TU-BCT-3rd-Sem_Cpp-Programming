#include <iostream>

class NewClass{
    public:
    void doSomething(int a,int b=2){
        std::cout<<"a/b"<<a/b<<std::endl;
    }
    void doSomething(char x,char y='z'){
        std::cout<<"Selected alphabets are: "<<x<<"&"<<y<<std::endl;
    }
};
int main(){
    NewClass nc;
    nc.doSomething(4);
    nc.doSomething('X');
    return 0;
}