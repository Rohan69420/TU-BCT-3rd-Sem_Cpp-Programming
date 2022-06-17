#include <iostream>
#include <math.h>

using namespace std;

class Circle{
    public:
    void readDisplay(){
        cout<<"Enter the radius of the circle:";
        cin>>radius;
        cout<<"Perimeter is: "<<perimeter()<<endl;
        cout<<"Area is: "<<area()<<endl;
    }
    inline float perimeter(){
        return 2*3.1415*radius;
    }
    inline float area(){
        return 3.1415*radius*radius;
    }
    private:
    float radius;
};
class Rectangle{
    public:
    void readDisplay(){
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>length;
        cin>>breadth;
        cout<<"The perimeter is: "<<perimeter()<<endl;
        cout<<"The area is: "<<area()<<endl;
    }
    inline float perimeter(){
        return 2*(length+breadth);
    }
    inline float area(){
        return length*breadth;
    }
    private:
    float length,breadth;
};
class Triangle{
    public:
    void readDisplay(){
        cout<<"Enter the value of a,b and c(sides of a triangle): ";
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<"The perimeter is: "<<perimeter()<<endl;
        cout<<"The area is:  "<<area()<<endl;
    }
    inline float perimeter(){
        return a+b+c;
    }
    inline float area(){
        s=(a+b+c)/2;
        return pow(s*(s-a)*(s-b)*(s-c),.5);
    }
    private:
    float a,b,c,s;
};


int main(){
    char ch;
cout<<"Enter C for circle,R for rectangle and T for triangle: ";
cin>>ch;
switch(ch){
    case 'C':
    Circle c;
    c.readDisplay();
    break;
    case 'R':
    Rectangle r;
    r.readDisplay();
    break;
    case 'T':
    Triangle t;
    t.readDisplay();
    break;
}
}