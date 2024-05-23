#include <iostream>
#include "StackType.h"

using namespace std;
template <class ItemType>
StackType<ItemType>::StackType(){
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (top == -1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    return (maxItems - 1 == top);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType item){
    if(IsFull()) throw FullStack();
    top++;
    items[top] = item;
}

template <class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty()) throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty()) throw EmptyStack();
    return items[top];
}
