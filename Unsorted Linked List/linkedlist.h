#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

template<class ItemType>
class UnsortedType{
    struct NodeType{
        ItemType item;
        NodeType* next;
    };

public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void ResetList();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void GetNextItem(ItemType&);
private:
    NodeType* currentPos;
    NodeType* listData;
    int length;
};

#endif // LINKEDLIST_H_INCLUDED
