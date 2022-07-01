#include <iostream>

class testConst{
private:
int a;

public:
testConst(int x){
    a=x;
}
//               \|/
void display() const{ //obvious constant function cause it doesnt change object val
    std::cout<<"a = "<<a<<std::endl;
}
void inca(){
    a++;
    std::cout<<"a = "<<a<<std::endl;
}
};
int main(){
   const testConst A(5); //A
    A.display(); //A 

    //A.inca(); //B //Should show error

    testConst B(4);
    B.inca(); //C

    B.display(); //D
    return 0;
}