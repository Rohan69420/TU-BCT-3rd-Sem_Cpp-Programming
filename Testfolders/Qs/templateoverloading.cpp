#include <iostream>

template <typename T>
void view(T a){
    std::cout<<"The value is: "<<a<<std::endl;
}
template <typename T>
void view(T a,T b){
    std::cout<<"The sum is: "<<a+b<<std::endl;
}
int main(){
    view<int>(4);
    view<float>(5.0f,4.2f);
    return 0;
}