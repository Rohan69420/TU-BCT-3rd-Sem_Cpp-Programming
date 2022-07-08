#include <iostream>
using namespace std;
    class person  //base class

{

protected:

   int age;

   char name[20];

public:

   void readAge(void)

   {

     cout<<"Enter Age: ";

     cin>>age;

   }

   void readName(void)

   {

     cout<<"\nEnter Name: ";

     cin>>name;

   }

   void printPerInformation(void)

   {

     cout<<"Name    - "<<name;

     cout<<"\nAge   - "<<age;

   }

};

//derived class inherits base class

class student:public person

{

private:

       int Sno;

       int percentage;

public:

       void readSno(void)

       {

         cout<<"Enter Sno.: "; cin>>Sno;

       } void readpercentage(void)  

    {

      cout<<"Enter percentage: ";

      cin>>percentage;

    }

    void printStuInformation(void)

    {

      cout<<"\nName  - "<<name;

      cout<<"\nAge   - "<<age;

      cout<<"\nS.no  - "<<Sno<<endl;

      cout<<"Percentage- "<<percentage<<endl;

      cout<<"conclusion"<<endl;

      if(percentage>=80)

        cout<<"\nThe student is Outstanding"<<endl;

      else if(percentage>=70)

        cout<<"The student is Medium"<<endl;

      else

        cout<<"The student is Poor"<<endl;

    }
    void tamper(){
        cout<<"Enter data to tamper";
        cin>>age;
    }

};

int main(void)

{     

      student st;

      st.readName();

      st.readAge();

      st.readSno();

      st.readpercentage();

      st.printStuInformation();
      st.tamper();

      return 0;

}