#include <iostream>

class statDemo{
    private:
    static int count;

    public:
    static void inc(){
        count++;
    }
    void display(){
        std::cout<<count<<std::endl;
    }


};
int statDemo::count=0;
int main(){
    statDemo s1,s2,s3;
    s1.display();
    s1.inc();
    s2.display();
    s2.inc();
    s3.display();
    s3.inc();
    
}