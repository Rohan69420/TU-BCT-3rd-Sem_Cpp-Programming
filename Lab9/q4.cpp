// Write any program that demonstrates the use of multiple 
// catch handling, re-throwing an exception, and catching 
// all exceptions.
#include <iostream>
using namespace std;
class ErrorHandling{
    private:

    public:
    class SmallFloat {};
    class IllegalNumber {};
    float DivideBySmallFloat(float a, float b){
        if (b<0.1 && b>-0.1){
            throw SmallFloat();
        }
        else if (b==3.00f){
            throw IllegalNumber();
        }
        else
        {
            return a/b;
        }

        if(b>5.0f && b<7.0f){
            throw;
            //we are throwing this case for future analysis.
        }
    }

};
int main(){
    ErrorHandling eh;
    try{
        eh.DivideBySmallFloat(1.12f,3.00f);
    }
    catch(ErrorHandling::SmallFloat){
        cout<<"Floating denominator too small."<<endl;
    }
    catch(ErrorHandling::IllegalNumber){
        cout<<"Cannot divide by this number";
    }
    try{
        eh.DivideBySmallFloat(1.12f,3.00f);
        eh.DivideBySmallFloat(1.12f,0.001f);
        eh.DivideBySmallFloat(1.12f,6.00f);
    }
    catch(...){
        //this is catch all block;
        cout<<"Caught all!"<<endl;
    }
    return 0;
}