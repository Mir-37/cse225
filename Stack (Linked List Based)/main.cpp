#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    string xx;
    cin >> xx;
    StackType<char> cc;
    for(int i=0; i<xx.length(); i++){
        // if stack is empty push the current bracket
        if(cc.IsEmpty()){
            cc.Push(xx[i]);
        }else if(cc.Top() == '(' && xx[i] == ')'){
        // if there is pair remove the pair
            cc.Pop();
        }else{
        // if there is no pair, push to the stack again
            cc.Push(xx[i]);
        }
    }
    // if stack is empty all the pair have been removed so balanced
    if(cc.IsEmpty()){
        cout << "Balanced" << endl;
    }else{
        cout << "Not Balanced" << endl;
    }
    return 0;
}
