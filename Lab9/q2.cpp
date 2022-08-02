// Write a class template for queue class. 
// Assume the programmer using the queue won't make mistakes,
//  like exceeding the capacity of the queue or trying to remove
//   an item when the queue is empty. Define several queues of 
//   different data types and insert and remove data from them.
#include <iostream>

using namespace std;

template <class T>

class queue

{
    private:
    T q[15]={};
    int Cpos;

    public:
    queue(){
        Cpos=0;
      
    }
    void addToQueue(){
        cout<<"Enter data to add to queue:"<<endl;
        cin>>q[Cpos];
        Cpos++;
    }
    void deleteFromQueue(){
        Cpos--;
        q[Cpos]={};
    }
    void insertToQueue(int n,T data){
        T newQ[15];
        for(int i=0;i<15;i++){
            
            if (i==n){
                newQ[i]=data;
            }
            else if(i>n){
                newQ[i]=q[i-1];
            }
            else{
                newQ[i]=q[i];
            }
        }
        for (int i=0;i<15;i++){
            q[i]=newQ[i];
        }
    }
    void ShowAll()
{
    for (int i=0;i<15;i++){
        cout<<q[i]<<endl;
    }
}
};

int main(){
    queue<int> Qi;
    queue<float> Qf;
    Qi.addToQueue();
    Qi.deleteFromQueue();
    Qi.insertToQueue(0,5);
    Qf.addToQueue();
    Qf.deleteFromQueue();
    Qf.insertToQueue(0,2.0f);
    Qi.ShowAll();
    Qf.ShowAll();
    return 0;
}