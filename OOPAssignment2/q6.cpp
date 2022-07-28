#include <iostream>
using namespace std;
class PounceKgm{
    private:
    int pound,ounce, kg,gm;
    float tpound, tkg;

    public:
    PounceKgm(){
        cout<<"Enter the weight in pound and ounces";
        cin>>pound;
        cin>>ounce;
        this->convertToKgGm();
        this->display();
    }
    void convertToKgGm(){
        tpound= static_cast<float>(pound+ounce*0.0625f);
        tkg= tpound*0.453592f;
        kg=static_cast<int>(tkg); //float to int results in truncation
        gm=(int)(tkg*1000)-(int)(tkg) * 1000;
    }
    void display(){
        cout<<kg<<" kgs and "<<gm<<" grams"<<endl;
    }
};
int main(){
    PounceKgm p;    
    return 0;
}