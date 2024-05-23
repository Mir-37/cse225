#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
#include "QueueType.h"
#include "QueueType.cpp"
using namespace std;

int main()
{
    QueueType<int> q;
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    q.Enqueue(3);
    int i;
    while(true){
        if(q.IsEmpty()){
            break;
        }
        try{
            q.Dequeue(i);
            cout << i << " ";
        }catch(exception ex){
            break;
        }
    }
    return 0;
}
