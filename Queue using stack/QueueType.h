#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED
#include "StackType.h"
class EmptyQueue{
    // Exception class when enqueueing
};

class FullQueue{
    // Exception class when dequeueing
};

template<class ItemType>
class QueueType{
public:
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType item);
    void Dequeue(ItemType& item);
    ItemType Front();
private:
    StackType<ItemType> s1;
    StackType<ItemType> s2;
    void TransferStack1ToStack2();
};

#endif // QUEUETYPE_H_INCLUDED
