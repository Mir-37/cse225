#include <iostream>
#include "QueueType.h"
#include "QueueType.cpp"
#include "StackType.h"
#include "StackType.cpp"
using namespace std;

int main()
{
    StackType<int> s;
    StackType<int> s2;
    StackType<int> s3;
    s.IsEmpty() ? cout << "Empty\n" : cout << "Not empty\n";
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);
    s.IsEmpty() ? cout << "Empty\n" : cout << "Not empty\n";
    s.IsFull() ? cout << "Full\n" : cout << "Not Full\n";
    s3.Push(3);
    while(true){
        try{
            s2.Push(s.Top());
            s3.Push(s.Top());
            s.Pop();
        }catch(EmptyStack ex){
            break;
        }
    }
    while(true){
        try{
            cout << s2.Top() << " ";
            s2.Pop();
        }catch(EmptyStack ex){
            break;
        }
    }
    cout << endl;
    while(true){
        try{
            s.Push(s3.Top());
            cout << s3.Top() << " ";
            s3.Pop();
        }catch(EmptyStack ex){
            break;
        }
    }
    cout << endl;
    s.IsFull() ? cout << "Full\n" : cout << "Not Full\n";
    s.Pop();
    s.Pop();
    cout << s.Top() << endl;

    // Balanced Paranthesis
    string stc;
    StackType<char> k;
    cin >> stc;
    for(int i=0; i<stc.length(); i++){
        if(k.IsEmpty()){
            k.Push(stc[i]);
        }else if(k.Top() == '(' && stc[i] == ')'){
            k.Pop();
        }else{
            k.Push(stc[i]);
        }
    }
    k.IsEmpty() ? cout << "Done\n" : cout << "Undone\n";

    return 0;
}
