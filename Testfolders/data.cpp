#include <iostream>
using namespace std;
class Test{
    private:
    int a,b,c,x;

    public:
    Test(){
        a=10,b=20,c=30;
    }
    void add(int p){
        a+=x;
        
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    Test t;
    t.add(b);
    t.display();
    return 0;
    }