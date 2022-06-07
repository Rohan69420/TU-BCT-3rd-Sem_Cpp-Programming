#include <iostream>
using namespace std;
namespace square { //defining namespace
    int num=2;
    float fun(int n){
        return n*n;
    }
}
namespace cube {
    int num=3;
    float fun(int n){
        return n*n*n;
    }
}
int main(){
    cout<<square::fun(cube::num)<<endl; //using namespace

    cout<<cube::fun(square::num)<<endl;
}