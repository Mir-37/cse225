#include <bits/stdc++.h>
#include "linkedlist.h"

using namespace std;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = nullptr;
    listData = nullptr;
}

template<class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
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
        return true;
    }
}
template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType* location;
    location = new NodeType;
    location->item = item;
    location->next = listData;
    listData = location;
    length++;
}

template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if(item == listData->item)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while(!(item == (location->next)->item)){
            location = location->next;
        }
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template<class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
    NodeType* location = listData;
    bool moreToSearch = (location != nullptr);
    found = false;
    while(moreToSearch && !found){
        if(item == location->info){
            found = true;
        }else{
            location = location->next;
            moreToSearch = (location != nullptr);
        }
    }
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;

    while(listData != nullptr){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
    MakeEmpty();
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList(){
    currentPos = nullptr;
}

template<class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item){
    if(currentPos == nullptr){
        currentPos = listData;
    }else{
        currentPos = currentPos->next;
    }
    item = currentPos->info;
}


