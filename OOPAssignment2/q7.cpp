#include <iostream>
using namespace std;
class lengthConversion{
    private:
    int meter,centimeter,feet,inches;
    float tmeter,tinches;

    public:
    lengthConversion(){
        cout<<"Enter thr length in meter and centimeter:"<<endl;
        cin>>meter;
        cin>>centimeter;
        this->convertToFeetIn();
        this->display();
    }
    void convertToFeetIn(){
        tmeter=(float)meter+centimeter/100.0f;
        tinches=tmeter*39.370078f;
        feet=(int)tinches/12;
        inches=(int)(tinches-feet*12);

    }
    void display(){
        cout<<feet<<" feet and "<<inches<<" inches"<<endl;
    }
};
int main(){
    lengthConversion l;
    return 0;
}