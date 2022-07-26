#include <iostream>
#include <ios>
/*The ios functions that can be used for formatting are

width()

fill()

precision()

setf()

unsetf()

flags() etc*/
class outputFormatter{
    private:

    float f;
    int n;

    public:
    outputFormatter(){
        f=12.334564;
        n=100;
    }
    void setPrecision(){
        std::cout.precision(4); //this a property of ios std::ios ig
        std::cout<<f<<std::endl;

    }
    void setWidth(){
        std::cout.width(50);
        std::cout<<f<<std::endl;
    }
    void setFill(){
        //this is more like 0 padding in c but any character is available
        std::cout.fill('x');
        std::cout.width(10);    // total 10, fill the last 5 by the speficied precision and pad the rest
        std::cout<<f<<std::endl;
    }
   
    void setFunction(){
        std::cout.setf(std::ios_base::hex,std::ios_base::basefield); //should show hex
        std::cout.setf(std::ios_base::showbase);
        std::cout<<n<<std::endl;
    }
    void unsetFunction(){
        std::cout.unsetf(std::ios_base::showbase); //should show normal integer
        std::cout.unsetf(std::ios_base::hex);
        std::cout<<n<<std::endl;
    }


};
int main(){
    outputFormatter oF;
    oF.setPrecision();
    oF.setWidth(); //notice that the flags are sticky and format by previous called function still remains
    oF.setFill();
    oF.setFunction();
    oF.unsetFunction();
    return 0;
}