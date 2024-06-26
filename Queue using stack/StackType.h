#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int maxItems = 5;
class FullStack{
    // Exception class when trying to push
};
class EmptyStack{
    //Exception class when trying to Pop or Top
};
template<class ItemType>
class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType item);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType items[maxItems];
};

#endif // STACKTYPE_H_INCLUDED
