#include <iostream>
#include <cstring>

class stringMod{
    private:
    char *arr;

    public:
    stringMod(){
        arr=nullptr;
    }
    stringMod(char *arrInp,int size){
        //std::cout<<sizeof(arrInp)/sizeof(arrInp[0])<<std::endl;
        arr=new char[size+1];
        for (int i=0;i<size;i++){
            arr[i]=arrInp[i];
        }
        arr[size]='\0';

    }

    void join(stringMod &s1,stringMod &s2){
        arr=new char[strlen(s1.arr)+strlen(s2.arr)];
        strcpy(arr,s1.arr);
        strcat(arr,s2.arr);
    }
    void display(){
        std::cout<<arr<<std::endl;
    }

};


int main(){
    //goes against oop concept but screw it
    char a1[]={'E','n','g','i','n','e','e','r','s',' ','a','r','e'};
    char a2[]= {'C','r','e','a','t','u','r','e','s',' ','o','f',' ','l','o','g','i','c'};
    stringMod s1(a1,13);
    stringMod s2(a2,18);
    stringMod s3;
    s3.join(s1,s2);
    s3.display();
    //s3.join(A1.arra,A2.arra);
    //s3.display();
    return 0;
}