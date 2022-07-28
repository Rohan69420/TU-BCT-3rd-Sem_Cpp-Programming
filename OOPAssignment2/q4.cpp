#include <iostream>
using namespace std;
//lets go complex on this one ;)

class Clock{
    private:
    int h24,mm,ss;
    public:
    friend ostream& operator<<(ostream &,Clock &);
    friend istream& operator>>(istream &,Clock &);

    
};
ostream& operator<<(ostream&os,Clock &C){
    cout<< C.h24%12 << (C.h24>12 ? " pm" : " am") <<C.mm<<" min: "<<C.ss<<" seconds " <<endl;
    
    return os;
}
istream& operator>>(istream&is,Clock &C){
    cout<<"Enter time in 24 hours format:"<<endl;
    cin>>C.h24;
    cin>>C.mm;
    cin>>C.ss;
    return is;
}
int main(){
    Clock c;
    cin>>c;
    cout<<c;
    return 0;
}