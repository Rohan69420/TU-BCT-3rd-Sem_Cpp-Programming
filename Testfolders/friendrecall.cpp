#include <iostream>
using namespace std;
class Y;
class X{
    private:
    int a, sum;
    
    public:
    X(){
        a=4;
        sum=0;
    }
    void findSum(Y&);
    void display(){
        cout<<"The Sum is: "<<sum<<endl;
    }
};
class Y{
    private:
    int b;
     
    public:
    Y(){
        b=2;
    }
    friend void X::findSum(Y&);

};
void X::findSum(Y &y){
    sum=a+y.b;
}
int main(){
    X x;
    Y y;
    x.findSum(y);
    x.display();
    return 0;
}