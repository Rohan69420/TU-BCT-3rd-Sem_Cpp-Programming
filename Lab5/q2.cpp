#include <iostream>

class Coordinates{
    private:
    int X,Y,Z;

    public:
    Coordinates(){
        X=0,Y=0,Z=0;
    }
    Coordinates(int a, int b, int c){
        X=a,Y=b,Z=c;
    }
  
    friend Coordinates operator +(Coordinates&,Coordinates&);
    friend Coordinates operator -(Coordinates&,Coordinates&);

    void showCoordinates(){
        std::cout<<"(X,Y,Z)="<<"("<<X<<","<<Y<<","<<Z<<")"<<std::endl;
    }

};

Coordinates operator +(Coordinates &c1,Coordinates &c2){
    Coordinates output;
    output.X=c1.X+c2.X;
    output.Y=c1.Y+c2.Y;
    output.Z=c1.Z+c2.Z;
    return output;
}
Coordinates operator -(Coordinates &c1,Coordinates &c2){
    Coordinates output;
    output.X=c1.X-c2.X;
    output.Y=c1.Y-c2.Y;
    output.Z=c1.Z-c2.Z;
    return output;
}
int main(){
    Coordinates c1(1,2,3),c2(4,5,6);
    Coordinates c3;
    c3=c1+c2;
    c3.showCoordinates();
    return 0;    
}