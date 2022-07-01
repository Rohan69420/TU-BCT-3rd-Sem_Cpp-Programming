#include <iostream>

class deptMem{
    private:
    int deptId; 
    std::string deptName; //dont forget string is in namespace std
    public:
    deptMem(){
        deptId=69420;
        deptName="CoolGuys";
        std::cout<<"Initialized!"<<std::endl;
    }
    ~deptMem(){
        std::cout<<"Object goes out of scope!"<<std::endl;
    }
};
int main(){
    deptMem d;
    return 0;
}