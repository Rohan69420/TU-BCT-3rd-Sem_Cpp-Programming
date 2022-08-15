#include <iostream>

class TimeT{
    private:
    int hr,min,sec;

    public:
    TimeT(int h, int m, int s):hr(h),min(m),sec(s){}
    TimeT(){}
    friend TimeT operator+(TimeT &,TimeT &);
    void display(){
        std::cout<<hr<<":"<<min<<":"<<sec;
    }
};
 TimeT operator+(TimeT &A,TimeT &B){
    TimeT C;
    C.hr=A.hr+B.hr;
    C.min=A.min+B.min;
    C.sec=A.sec+B.sec;
    return  C;
 }
int main(){
    TimeT t1(1,2,3),t2(4,5,6),t;
    t=t1+t2;
    t.display();
    return 0;
}