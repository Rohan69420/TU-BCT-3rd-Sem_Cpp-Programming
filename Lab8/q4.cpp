/*Write a program that stores the information about students (name, student id, department, 
and address) in a structure and then transfers the information to a file in your directory.
 Finally, retrieve the information from your file and print it in the proper format on your
  output screen.*/
#include <iostream>
#include <fstream>

using namespace std;

    struct stud { //global
        std::string name, department,address;
        int studentId;
    }s,s1;

class studentData{
    private:
    //std::ofstream ofile;

    public:
    
    void getInfo(){
        cout<<"Enter your name, id, department and address"<<endl;
        cin>>s.name;
        cin>>s.studentId;
        cin>>s.department;
        cin>>s.address;
    }
    void saveToFile(){

    }
    //void openOutputfile(){
    //    std::ostream.ofile("q4output.txt");
    //}
    void writeToFile(){
        ofstream ofile("q4output.txt",std::ios::out); 

    //lets use a simpler method.
        ofile<<s.name<<s.studentId<<s.department<<s.address;
        ofile.close();
    }
    void readFromFile(){
        //simpler method
        ifstream ifile("q4output.txt",std::ios::in);
        ifile>>s1.name>>s1.studentId>>s1.department>>s1.address;
        ifile.close();
        cout<<s1.name<<endl;
        cout<<s1.department<<endl;
        cout<<s1.address<<endl;
        cout<<s1.studentId<<endl;
    }
};
int main(){
    studentData Student;
    Student.getInfo();
    Student.writeToFile();
    Student.readFromFile();
    return 0;
}