//curious if you could initialize a char array by using the : var() technique, most likely not but yes
#include <iostream>

class Test{
    private:
    char *s;
    public:
    Test(char str[]):s(str){}
    void display(){
        std::cout<<s;
    }
};
int main(){
    char p[]="this a string";
    Test t(p);
    t.display();
    return 0;
}