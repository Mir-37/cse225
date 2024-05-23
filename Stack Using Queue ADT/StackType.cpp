#include <iostream>
#include "QueueType.h"
#include "StackType.h"

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType(){
    q1(5);
    q2(5);
}

template <class ItemType>
StackType<ItemType>::StackType(int max){
    q1(max);
    q2(max);
}

template <class ItemType>
StackType<ItemType>::~StackType(){
    q1.MakeEmpty();
    q2.MakeEmpty();
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return q1.IsEmpty();
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    return q1.IsFull();
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType item){
    if(IsFull()) throw FullStack();

    q2.Enqueue(item);
    ItemType i;
    while(true){
        try{
            q1.Dequeue(i);
            q2.Enqueue(i);
        }catch(exception ex){
            break;
        }
    }
    QueueType<ItemType> qt;
    qt = q1;
    q1 = q2;
    q2 = qt;
}

template <class ItemType>
void StackType<ItemType>::Pop(ItemType& item){
    if(IsEmpty()) throw EmptyStack();
    q1.Dequeue(item);
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty()) throw EmptyStack();
    ItemType item;
    q1.Dequeue(item);
    q1.Enqueue(item);
    return item;
}

