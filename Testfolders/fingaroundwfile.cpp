#include <iostream>
#include <fstream>

//try reading in sequence using a struct; as warned against by stackoverflow users
struct data {
    std::string name;
    int employeeNo;    
} s,d[3];

int main(){
    std::fstream file;
    // file.open("fingaround1.txt",std::ios::in|std::ios::app); //do you need in along with append? we'll find out
    // //we know in wont do the work for sure because it will keep overwriting ig, lets try
    // char ch;
    // ch='y';
    // while(ch!='n') {
    //     std::cout<<"Enter a employee name and employee number:"<<std::endl;
    //     std::cin>>s.name;
    //     std::cin>>s.employeeNo;
    //     std::cout<<"Do you want to enter another value?(y/n)"<<std::endl;
    //     fflush(stdin);
    //     std::cin>>ch;
    //     file<<s.name<<" "<<s.employeeNo<<"\n";
    // }
    // file.close();
    file.open("fingaround1.txt",std::ios::out);
    //struct data d[3];
    while(!file.eof()){
        //for (int i=0;i<3;i++){ //this shouldnt work
        file>>d[0].name>>d[0].employeeNo;
        //>>d[1].name>>d[1].employeeNo>>d[2].name>>d[2].employeeNo;
        std::cout<<d[0].name<<" "<<d[0].employeeNo;
        //}
        //std::cout<<s.name<<" "<<s.employeeNo;
        
        }
    file.close();
        return 0;
}