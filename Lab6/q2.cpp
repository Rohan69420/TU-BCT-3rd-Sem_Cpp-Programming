#include <iostream>

using namespace std;
class feetInch;
class meterCentimeter{
    private:
    int meter, centimeter;
    float fmeter;
    public:
    meterCentimeter():meter(0),centimeter(0){}
    meterCentimeter(int m, int cm):meter(m),centimeter(cm){
        cout<<"Input meter: "<<m<<" Centimeter:"<<cm<<endl;
    }
    void operator =(feetInch&);
    void display(){
        cout<<"Meter: "<<meter<<" Centimeter:"<<centimeter<<endl;
    }
    friend feetInch;
};
class feetInch{
    private:
    int feet, inch;
    float fft;
    public:
    feetInch():feet(0),inch(0){}
    feetInch(int ft,int in):feet(ft),inch(in){
        cout<<"Input feet: "<<ft<<" Inches:"<<in<<endl;
    }
    void operator =(meterCentimeter&);
    void display(){
        cout<<" Feet: "<<feet<<" Inches: "<<inch<<endl;
    }
    friend meterCentimeter;
};
    void meterCentimeter::operator =(feetInch& fi){
        fi.fft=(float)fi.feet+fi.inch/12.0f;
        fmeter=(float)fi.fft*0.3048f;
        centimeter=(int)(fmeter*100)%100;
        meter=(int)fmeter;
    }
    void feetInch::operator =(meterCentimeter& mcm){
        mcm.fmeter=mcm.meter*100+mcm.centimeter;
        fft=(float)(mcm.fmeter)*0.3937;
        
        feet=(int)fft/12;
        inch=(int)fft%12;
        
        cout<<feet<<"ft "<<inch<<" inches";
       
    }

int main(){
    meterCentimeter m(4,26),m1;
    feetInch f(3,4),f1;
    m1=f;
    m1.display();
    f1=m; //metercentimeter object, should return the feetinch object no?
    f1.display();
    return 0;
}