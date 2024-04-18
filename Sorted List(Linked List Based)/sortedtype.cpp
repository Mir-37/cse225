#include <iostream>
#include "sortedtype.h"
#define TEMPLATE template <class ItemType>
#define CLASS SortedType<ItemType>

using namespace std;

TEMPLATE
CLASS::SortedType()
{
    length = 0;
    listData = nullptr;
    currentPos = nullptr;
}

TEMPLATE
int CLASS::LengthIs()
{
    return length;
}

TEMPLATE
bool CLASS::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        cout << exception.what() << endl;
        return true;
    }
}

TEMPLATE
void CLASS::InsertItem(ItemType item)
{
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;

    location = listData;
    predLoc = nullptr;
    moreToSearch = (location != nullptr);
    while(moreToSearch)
    {
        if(location->info < item)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != nullptr);
        }
        else
        {
            moreToSearch = false;
        }
    }
    newNode = new NodeType;
    newNode->info = item;
    if(predLoc == nullptr){
        newNode->next = listData;
        listData = newNode;
    }else{
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

TEMPLATE
void CLASS::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if(item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while(!(item ==(location->next)->info))
        {
            location = location->next;
        }
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

TEMPLATE
void CLASS::RetrieveItem(ItemType& item, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != nullptr);
    found = false;
    while(moreToSearch && !found)
    {
        if(item == location->info)
        {
            found = true;
        }
        else if(item > location->info)
        {
            location = location->next;
            moreToSearch = (location != nullptr);
        }else{
            moreToSearch = false;
        }
    }
}

TEMPLATE
void CLASS::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData != nullptr)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

TEMPLATE
CLASS::~SortedType()
{
    MakeEmpty();
}

TEMPLATE
void CLASS::ResetList()
{
    currentPos= nullptr;
}

TEMPLATE
void CLASS::GetNextItem(ItemType& item)
{
    if(currentPos == nullptr)
    {
        currentPos = listData;
    }
    else
    {
        currentPos = currentPos->next;
    }
    item = currentPos->info;
}
