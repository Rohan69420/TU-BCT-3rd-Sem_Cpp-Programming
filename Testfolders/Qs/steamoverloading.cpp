#include <iostream>

class timeHolderr{
    private:
    int hr,min,second;

    public:
    timeHolderr(int h, int m, int s):hr(h),min(m),second(s){}
    friend std::ostream &operator <<(std::ostream &os,timeHolderr &);
};
std::ostream &operator << (std::ostream &os, timeHolderr &t){
    os<<t.hr<<":"<<t.min<<":"<<t.second<<std::endl;
    return os;
}
int main(){
    timeHolderr t(11,11,11);
    std::cout<<t;
    return 0;
}