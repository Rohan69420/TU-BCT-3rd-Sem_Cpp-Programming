#include <iostream>

using namespace std;
template <typename T> 
T Sum(T a, T b){
    return a+b;
}
int main(){
    int a=5,b=2;
    float x=2.0f,y=4.0f;
    cout<<Sum(a,b)<<endl;
    cout<<Sum(x,y)<<endl;
    return 0;
}