#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class stringOp{
    public:
    stringOp(char *inpArr,int len){
        arr= new char[len];
        strcpy(arr,inpArr);
        l=len;
    }
    void join(stringOp &s){
        arr=new l+s.l;
        strcat(arr,s.arr); 
    }
    void display(){
    cout<<arr<<endl;
    }

    private:
    char *arr,*newArr;
    int l;
};
int main(){
    stringOp s1("Engineers are ",14);
    stringOp s2("creatures of logic",18);
    s2.join(s1);
    s2.display();

}