//this is question 1
#include <iostream>
using namespace std;
class shape {
public:
virtual float area(){return 0.0f;}
virtual void display(){}

virtual ~shape(){
    std::cout<<"Base destructor called"<<std::endl;
    //got nothing
}
private:

};
class circle: public shape {
    private:
    float radius;
    public:
    circle(int x):radius(x){}
    float area(){
        return 3.1415f*radius*radius;
    }
    void display(){
        std::cout<<"Area of Circle is:"<<area()<<std::endl;
    }
    ~circle(){
        cout<<"Circle destructor called"<<endl;
    }
};
class rectangle : public shape {
private:
    float length,breadth;
    public:
    rectangle(int x, int y):length(x),breadth(y){}
    float area(){
        return length*breadth;
    }
    void display(){
        std::cout<<"Area of Rectangle is:"<<area()<<std::endl;
    }
    ~rectangle(){
        cout<<"Rectangle destructor called"<<endl;
    }
};
class trapezoid : public shape {
    private:
    float a,b,h;
    public:
    trapezoid(int x,int y, int z):a(x),b(y),h(z){}
    float area(){
        return h*(a+b)/2;
    }
    void display(){
        std::cout<<"Area of Trapezoid is:"<<area()<<std::endl;
    }
    ~trapezoid(){
    cout<<"Trapezoid destructor called"<<endl;
    }
};
int main(){
    circle c(3);
    c.display();
    rectangle r(3,4);
    r.display();
    trapezoid t(1,2,3);
    t.display();
    shape *sptr;
    sptr=&c;
    delete sptr;

}