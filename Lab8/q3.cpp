#include <iostream>
using namespace std; //ostream, istream all in std;

class complex{
    private:
    int real,imaginary;

    public:
    friend ostream& operator<<(ostream &os,const complex &c);
    friend istream& operator>>(istream &is, complex &c);

};
ostream& operator<<(ostream &os,const complex &c){
    os<<c.real;
    os<<"+i"<<c.imaginary<<endl;
    return os;
}
istream& operator >>(istream &is,complex &c){
    cout<<"Real part:";
    is>>c.real;
    cout<<"Imaginary part:";
    is>>c.imaginary;
    return is;
}
int main(){
    complex c;
    cin>>c;
    cout<<c;
    return 0;
}