#include <iostream>
class integ2;
class integ1{
    private:
    int A;
    public:
    integ1(int W){
        A=W;
    }
    friend void operator==(integ1 &,integ2 &);
    friend void operator>=(integ1 &,integ2 &);
    friend void operator<=(integ1 &,integ2 &);
    friend void operator!=(integ1 &,integ2 &);
    friend void operator>(integ1 &,integ2 &);
    friend void operator<(integ1 &,integ2 &);
};
class integ2{
    private:
    int B;
    public:
    integ2(int E){
        B=E;
    }
    friend void operator==(integ1 &,integ2 &);
    friend void operator>=(integ1 &,integ2 &);
    friend void operator<=(integ1 &,integ2 &);
    friend void operator!=(integ1 &,integ2 &);
    friend void operator>(integ1 &,integ2 &);
    friend void operator<(integ1 &,integ2 &);
};
void operator==(integ1 &x,integ2 &y){
    if(x.A==y.B){
        std::cout<<x.A<<"=="<<y.B<<std::endl;
    }
}
void operator<=(integ1 &x,integ2 &y){
    if(x.A<=y.B){
        std::cout<<x.A<<"<="<<y.B<<std::endl;
    }
}

void operator>=(integ1 &x,integ2 &y){
    if(x.A>=y.B){
        std::cout<<x.A<<">="<<y.B<<std::endl;
    }
}
void operator!=(integ1 &x,integ2 &y){
    if(x.A!=y.B){
        std::cout<<x.A<<"!="<<y.B<<std::endl;
    }
}
void operator>(integ1 &x,integ2 &y){
    if(x.A>y.B){
        std::cout<<x.A<<">"<<y.B<<std::endl;
    }
}
void operator<(integ1 &x,integ2 &y){
    if(x.A<y.B){
        std::cout<<x.A<<"<"<<y.B<<std::endl;
    }
    }
int main(){
    integ1 x(5);
    integ2 y(7);
    x==y;
    x<=y;
    x>=y;
    x<y;
    x>y;
    x!=y;
    return 0;

}