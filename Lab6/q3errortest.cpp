// Figured the issue, turns out that the issue might be that destructor frees the memory
// and what you end up passing is the first initialized data i.e, 0
#include <iostream>

using namespace std;

class test{
public:
int i;

test(){
    int i=5;
}
};
int main(){
    test t;
    cout<<t.i;
    return 0;
}