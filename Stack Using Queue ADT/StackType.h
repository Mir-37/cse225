#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include "QueueType.h"
class EmptyStack{

};
class FullStack{

};
template<class ItemType>
class StackType{
public:
    StackType();
    StackType(int max);
    ~StackType();
    bool IsEmpty();
    bool IsFull();
    void Push(ItemType item);
    void Pop(ItemType& item);
    ItemType Top();
private:
    QueueType<ItemType> q1;
    QueueType<ItemType> q2;

};

#endif // STACKTYPE_H_INCLUDED
