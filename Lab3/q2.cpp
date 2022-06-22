#include <iostream>

using namespace std;

class numberHandler {
    private:
    char ch;
    bool prime,runAgain;
    int num;

    public:
    numberHandler (){ //using constructor concept
        prime=true;
        runAgain=true;
    }

    void primeChecker(){
        if (num<2){
            prime=false;
        }
        else{
        for (int i=2;i<=num/2;i++){
            if (num % i == 0){
                prime=false;
            }
        }
        }
    }
    void ReadNDisplay(){
        cout<<"Enter a number to see if it is prime: "<<endl;
        cin>>num;
        primeChecker();
        if (prime){
        cout<<"It is prime!"<<endl;
        }
        else{
        cout<<"It is not a prime"<<endl;
        }
    }
    void testingLoop(){
        while (runAgain){
            ReadNDisplay();
            cout<<"Do you want to continue? (y/n)"<<endl;
            cin>>ch;
            if (ch=='N'|| ch=='n' )
                runAgain=false;
        }
        
    }

};
int main(){
    numberHandler N; //object with data passed for constructor
    N.testingLoop();

}