#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType
{
    public :
        SortedType();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void SearchItem(ItemType&, bool&);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
