#include <iostream>
#include <math.h>

using namespace std;
class y;
class z;
class x
{
private:
    int X;
   
    public:
    friend class y;
     friend void addYX(x,y); //A
    x(){
        X=10;
    }
    friend void multiplication(x,y,z); //B
    friend void division(x,y,z);
    friend void subtraction(x,y,z);
};

class z
{
private:
    int Z;
    void showtype(){
        cout<<"This is 3d coordinate system"<<endl;
    }
    public:
    z(){
        Z=20;
    }
    friend class y;
    
    friend void multiplication(x,y,z);
    friend void division(x,y,z);
    friend void subtraction(x,y,z);
};
class y
{
private:
    int Y;
    public:
    y(){
        Y=10;
    }
    void addYX(x Ekx, y Wai){
        cout<<"Distance="<<pow((Ekx.X*Ekx.X+Wai.Y*Wai.Y),0.5)<<endl;
    };
    void testfriendz(z c){
        c.showtype();
    }
    friend void multiplication(x,y,z); //B
    friend void division(x,y,z);
    friend void subtraction(x,y,z);
};
void multiplication(x a,y b, z c){
    cout<<"x*y*z"<<a.X*b.Y*c.Z<<endl;
}
void division(x a,y b,z c){
    cout<<"x/y="<<(float) a.X/b.Y<<" y/z="<<(float) b.Y/c.Z<<endl;
}
void subtraction(x a,y b,z c){
    cout<<"x-y-z="<<a.X-b.Y-c.Z<<endl;
}
int main(){
    x X1;
    y Y1;
    z Z1;
    Y1.addYX(X1,Y1);
    multiplication(X1,Y1,Z1);
    division(X1,Y1,Z1);
    subtraction(X1,Y1,Z1);

    Y1.testfriendz(Z1); //C
    return 0;
}