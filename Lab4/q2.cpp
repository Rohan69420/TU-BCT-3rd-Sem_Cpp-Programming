#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class stringOp{
    public:
    stringOp(string input){
        arr= new char[input.length()+1];
        strcpy(arr,input.c_str());
        l=input.length()+1;
    }
    void join(stringOp &s){
        newArr=new char[l+s.l+1];
        strcpy(newArr,arr);
        strcat(newArr,s.arr); 
    }
    void display(){
    cout<<newArr<<endl;
    }

    private:
    char *arr,*newArr;
    int l;
};
int main(){
    stringOp s1("Engineers are ");
    stringOp s2("Creatures of logic");
    s1.join(s2);
    s1.display();

}