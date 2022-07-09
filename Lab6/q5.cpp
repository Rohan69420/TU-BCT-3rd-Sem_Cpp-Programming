#include <iostream>
using namespace std;
class Complex3;
class Complex1{
protected:
float a,b;

public:
void input(){
    cout<<"Enter a complex number a+ib:"<<endl;
    cin>>a;
    cin>>b;
}
};
class Complex2 : public Complex1{
    private:
    float a1,b1,addA,addB;

    public:
    Complex2(int x, int y):a1(x),b1(y){}
    friend Complex3;
    void addComplex(){
        addA=a+a1;
        addB=b+b1;
    }
    void display(){
        cout<<"Sum: "<<addA<<"+ i"<<addB<<endl;
    }
};
class Complex3 : protected Complex1{
    private:
    float diffA,diffB;

    public:
    void difference(Complex2 &c){
    diffA=a-c.a1;
    diffB=b-c.b1;
    }

    void display(){
    cout<<"Diff: "<<diffA<<"+ i"<<diffB<<endl;
}
};
int main(){
    Complex2 c2(3,4);
    c2.input();
    c2.addComplex();
    c2.display();
    Complex3 c3;
    c3.difference(c2);
    c3.display();
    return 0;
}
