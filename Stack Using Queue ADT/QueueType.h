#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED

class EmptyQueue{
    // Exception class when enqueueing
};

class FullQueue{
    // Exception class when dequeueing
};

template<class ItemType>
class QueueType{
public:
    QueueType();
    QueueType(int max);
    ~QueueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType item);
    void Dequeue(ItemType& item);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQueue;
};

#endif // QUEUETYPE_H_INCLUDED
