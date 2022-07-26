#include <iostream>

class test {
    private:
    int x;
    public:
    int &assignx(){
        return x;
    }
    void showX(){
        std::cout<<"X = "<<x<<std::endl;
    }
};
int main(){
    test t;
    t.assignx()=7;
    t.showX();
    return 0;
}