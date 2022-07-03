#include <iostream>
class B;
class A{
    private:
    int Adata;
    
    public:
    A():Adata(4){};
    void add(A,B);
};
class B{
    private:
    int Bdata;
    public:
    B():Bdata(5){};
    friend void A::add(A,B);

};
void A::add(A a, B b){
        std::cout<<a.Adata+b.Bdata<<std::endl;
    }
int main(){
A a;
B b;
a.add(a,b);
return 0;
}