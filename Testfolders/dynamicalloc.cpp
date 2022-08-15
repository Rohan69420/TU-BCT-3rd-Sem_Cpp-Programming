#include <iostream>

class NewObject{
private:
int num,*aptr,*arr;

public:
NewObject(int n){
    aptr = new int;
    arr = new int[n];
    num=n;

}
void fillObject(){
    std::cout<<"Enter the value of aptr"<<std::endl;
    std::cin>>*aptr;
    for (int i=0;i<num;i++){
       std::cout<<"Enter "<<i+1<<"th value:";
        std::cin>>arr[i];
    }
}
};
int main(){
    NewObject N(5);
    N.fillObject();
    return 0;
}