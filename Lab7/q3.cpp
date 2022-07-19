#include <iostream>
using namespace std;
class Student{
    private:
    int _std_no;
    //Student *sptr; //this use garna parxa?
    public:
    Student(){
        _std_no=400;
    }
    int getStudentNo(){
        return _std_no;
    }
    virtual void display() = 0; //this make this class abstract?
};
class Engineering : public Student{
    public:
    Engineering(){}
    void display(){
        cout<<"The acceptance rate of Engineering is 10% i.e "<<.1*getStudentNo()<<"students"<<endl;
    }
};
class Medicine : public Student {
    public:
    void display(){
        cout<<"The acceptance rate of Medicine is 5% i.e"<<.05*getStudentNo()<<"students"<<endl;
    }
};
class Science : public Student {
    public:
    void display(){
        cout<<"The acceptance rate of Science is 50% i.e"<<.5*getStudentNo()<<"students"<<endl;
    }
};
int main(){
    Student *sptr[3];
   Engineering e;
   Medicine m;
   Science s;
   sptr[0] = dynamic_cast<Engineering*>(&e);
   sptr[1]= dynamic_cast<Medicine*>(&m);
   sptr[2]= dynamic_cast<Science*>(&s);
   sptr[0]->display();
   sptr[1]->display();
   sptr[2]->display();
}