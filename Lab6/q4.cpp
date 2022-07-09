#include <iostream>
using namespace std;
class Person{
    //this gon be the base class
    protected:
    std::string name;
    int age;
    
    public:
    void showAddressB(){
        cout<<this; //should work or nah? need hex?
        printf("%d",this);
    }
};
class Student : protected Person //dis how we do it no?
{
    private:
    char _section;
    int _roll_no;
    public:
    void assignRecord(){
        cout<<"Enter student name, age, roll number and section"<<endl;
        cin>>name;
        cin>>age;
        cin>>_roll_no;
        cin>>_section;
    }
    void changeRecord(){
        cout<<"Enter new student name, age, roll number and section"<<endl;
        cin>>name;
        cin>>age;
        cin>>_roll_no;
        cin>>_section;
    }
    void deleteRecord(){
        name="";
        age=0;
        _roll_no=0;
        _section='\0';
    }
    void showRecord(){
        cout<<"Name:"<<name<<" Age: "<<age<<"Roll number: "<<_roll_no<<" Section: "<<_section<<endl;
    }
    void showAddress(){
        cout<<this<<endl;
         printf("%d\n",this);
    }

};
class Employee : protected Person{
    private:
    int _employeeNo;
    public:
     void assignRecord(){
        cout<<"Enter employee name, age, employee number"<<endl;
        cin>>name;
        cin>>age;
        cin>>_employeeNo;
    }
    void changeRecord(){
        cout<<"Enter new employee name, age, employee number"<<endl;
        fflush(stdin);
        cin>>name;
        cin>>age;
        cin>>_employeeNo;
    }
    void deleteRecord(){
        name="";
        age=0;
        _employeeNo=0;
    }
    void showData(){
        cout<<"Name:"<<name<<" Age:"<<age<<" Employee number:"<<_employeeNo<<endl;
}
    void showAddress(){
        cout<<this<<endl;
        printf("%d",this);
    }
};
int main(){
    Student s;
    s.assignRecord();
    s.showRecord();
    s.showAddress();
    Employee e;
    e.assignRecord();
    e.changeRecord();
    e.showData();
    e.showAddress();
    return 0;
}
