#include <iostream>
#include <ostream>

class complex{
    private:
    int real_part,imag_part;

    public:
    complex(int a, int b):real_part(a),imag_part(b){}
    complex():real_part(0),imag_part(0){}
    complex operator+(complex &C2){
        complex CF;
        CF.real_part=real_part+C2.real_part;
        CF.imag_part=imag_part+C2.imag_part;
        return CF;
    }
    void operator<=(complex &C2){
        if (real_part<=C2.imag_part){
            std::cout<<"1st complex number is less than 2nd complex number."<<std::endl;
        }
        else{
            std::cout<<"Not true"<<std::endl;
        }
    }
    friend std::ostream &operator<<(std::ostream &os,complex &Cm);
};
std::ostream &operator<<(std::ostream &os,complex &Cm){
        os<<"Real part"<<Cm.real_part;
        os<<"Imaginary part"<<Cm.imag_part<<std::endl;
        return os;
    }
int main(){
    complex C(2,4),CC(3,5),CS;
    CS=C+CC;
    C<=CC;
    std::cout<<C;
    return 0;
}