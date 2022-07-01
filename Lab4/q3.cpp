#include <iostream>

class deptMem{
    private:
    int deptId;
    std::string deptName;
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