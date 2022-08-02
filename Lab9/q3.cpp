// Modify the stack class given in the previous lab to add the exception 
// when a user tries to add an item while the stack is full and when the 
// user tries to add the item while the stack is empty. Throw exceptions 
// in both of the cases and handle these exceptions.
#include <iostream>

using namespace std;

template <class T>

class Stack

{

private:

    T st[100];

    int top;

public:
class ErrorH{};
class ErrorE{};

    Stack();

    void push(T var);

    T pop();

};

template <class T>

Stack<T>::Stack()

{

    top=-1;

}

template <class T>

void Stack<T>::push(T var)

{
    if((top+1)>100 && top>0){
    st[++top]=var;
    }
    else if(top==0){
        throw ErrorE();
    }
    else{
        throw ErrorH();
    }
    

}

template <class T>

T Stack<T>::pop()

{

    return st[top--];

}

int main()

{

    Stack<float> s1;

try{
    s1.push(111.1F);

    s1.push(222.2F);

    s1.push(333.3F);
}

    catch(Stack<float>::ErrorH)

    {

        cout<<"Exception: Tried to add when full "<<endl;

    }
catch(Stack<float>::ErrorE)

    {

        cout<<"Exception: Tried to add when empty "<<endl;

    }

    cout<<"1 : "<<s1.pop()<<endl;

    cout<<"2 : "<<s1.pop()<<endl;

    cout<<"3 : "<<s1.pop()<<endl;

    Stack<long> s2;
try{
    s2.push(123123123L);

    s2.push(234234234L);

    s2.push(345345345L);
}
    catch(Stack<long>::ErrorH)

    {

        cout<<"Exception: Tried to add when full "<<endl;

    }
catch(Stack<long>::ErrorE)

    {

        cout<<"Exception: Tried to add when empty "<<endl;

    }

    cout<<"1 : "<<s2.pop()<<endl;

    cout<<"2 : "<<s2.pop()<<endl;

    cout<<"3 : "<<s2.pop()<<endl;

    return 0;

}
