#include <iostream>
using namespace std;

class ttime{
    public:
    ttime(){
        hour=0,minute=0,second=0;
        t12=false;
    }
    ttime(int hr, int min,int sec){
        hour=hr;
        minute=min;
        second=sec;
    }
    void addttime(ttime &t){
        hour+=t.hour;
        minute+=t.minute;
        second+=t.second;
    }
    void displayFormat(){
        cout<<"Do you want 12 hr format?(y/n)"<<endl;
        cin>>ch;
        if (ch=='y')
        t12=true;
        if (t12){
            cout<<"ttime: "<<hour%13<<":"<<minute<<":"<<second;
        }
        else{
            cout<<"ttime: "<<hour<<":"<<minute<<":"<<second;
        }

    }
    
    private:
    bool t12;
    char ch;
    int hour,minute, second;
};
int main(){
    //ttime t;
    ttime t1(2,10,30);
    ttime t2(3,30,20);
    t2.addttime(t1);
    t2.displayFormat();
}