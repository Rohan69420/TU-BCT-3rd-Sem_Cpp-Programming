#include <iostream>

using namespace std;

class Celcius {
    private:
    float temp;

    public:
    float toFahrenheit(float temp){
        return 9*temp/5+32;
    }
    void ReadNdisplayC(){
        cout<<"Enter the temperature: "<<endl;
        cin>>temp;
        cout<<"In Fahrenheit: "<<toFahrenheit(temp);
    }
};
class Fahrenheit{
    private:
    float temp;

    public:
    float toCelcius(float temp){
        return 5*(temp-32)/9;
    }
    void ReadNdisplayF(){
        cout<<"Enter the temperature: "<<endl;
        cin>>temp;
        cout<<"In Celcius: "<<toCelcius(temp);
    }
};
int main(){
    char ch;
    cout<<"Press C to enter the temperature in Celcius and F to enter temperature in Fahrenheit"<<endl;
    cin>>ch;
    switch(ch){
        case 'C':
        Celcius celci;
        celci.ReadNdisplayC();
        break;
        
        case 'F':
        Fahrenheit fahren;
        fahren.ReadNdisplayF();
        break;


    }

}