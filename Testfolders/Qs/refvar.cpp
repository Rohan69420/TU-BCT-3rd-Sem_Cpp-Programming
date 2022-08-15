#include <iostream>

class randomc{
    private:
    int x=7;
    int &r;
    public:
    randomc(int p):r(p){}
    void display(){
        std::cout<<r;
    }
};
int main(){
    randomc rr(10);
    rr.display();
    return 0;

}