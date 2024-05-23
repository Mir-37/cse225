#include <iostream>
#include "QueueType.h"
#include "StackType.h"

using namespace std;

template <class ItemType>
bool QueueType<ItemType>::IsEmpty() {
    return s1.IsEmpty() && s2.IsEmpty();
}

template<class ItemType>
void QueueType<ItemType>::Enqueue(ItemType item){
    s1.Push(item);
}

template <class ItemType>
void QueueType<ItemType>::TransferStack1ToStack2() {
    while (!s1.IsEmpty()) {
        ItemType item = s1.Top();
        s2.Push(item);
        s1.Pop();
    }
}

template <class ItemType>
void QueueType<ItemType>::Dequeue(ItemType& item) {
    if (s2.IsEmpty()) {
        TransferStack1ToStack2();
    }
    if (!s2.IsEmpty()) {
        item = s2.Top();
        s2.Pop();
    } else {
        throw EmptyQueue();
    }
}

template <class ItemType>
ItemType QueueType<ItemType>::Front() {
    if (s2.IsEmpty()) {
        TransferStack1ToStack2();
    }
    if (!s2.IsEmpty()) {
        return s2.Top();
    } else {
        throw EmptyQueue();
    }
}

