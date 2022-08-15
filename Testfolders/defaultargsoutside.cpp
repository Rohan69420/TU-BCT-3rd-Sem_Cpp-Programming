#include <iostream>

using namespace std;

class Test{
  public:
  void display(char x='s',int y=7);
    
};
void Test::display(char x,int y){
    cout<<"x,y="<<x<<" , "<<y<<endl;
  }
int main(){
    Test t;
    t.display('y');
    return 0;
}