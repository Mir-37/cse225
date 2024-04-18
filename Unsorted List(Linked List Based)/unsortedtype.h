#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    int LengthIs();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void GetNextItem(ItemType&);
    void DeleteItem(ItemType);
    void InsertAtBeginning(ItemType);
    void InsertAtEnd(ItemType);
    void Display();
    void DeleteFromBeginning();
    void DeleteFromEnd();
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
