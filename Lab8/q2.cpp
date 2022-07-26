#include <iostream>
#include <ios>

class combinedManipulator{
    private:
    float f;
    public:
   
    void setManipulator(int width,int precision, char fillChar){
        std::cout<<"The new manipulator settings will be updated!\nInput a value to see the output"<<std::endl;
        std::cin>>f;
        std::cout.width(width);
        std::cout.precision(precision);
        std::cout.fill(fillChar);
        std::cout<<f<<std::endl;
        
        
    }
};
int main(){
    int w,p;
    char c;
    std::cout<<"Enter the width, precision and fill character:";
    std::cin>>w;
    std::cin>>p;
    std::cin>>c;
    combinedManipulator cm;
    cm.setManipulator(w,p,c);
    return 0;
}