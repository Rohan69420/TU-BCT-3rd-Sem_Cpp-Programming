#include <iostream>
using namespace std;
class Person {
    public:
    void display(){
        cout<<"The name is Wazaoski"<<endl;
    }  

};
class Employee : virtual public Person {
    
};
class Student : virtual public Person {
    
};
class Manager: public Employee , public Student {

};

int main(){
    Manager m;
    m.display();

}