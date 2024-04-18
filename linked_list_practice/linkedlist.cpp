#include<bits/stdc++.h>
#include "linkedlist.h"

using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType(){
    length = 0;
    listData = nullptr;
    currentPos = nullptr;
}

template<class ItemType>
int SortedType<ItemType>::LengthIs(){
    return length;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }catch(bad_alloc& exception){
        return true;
    }
}

template<class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item){
    NodeType* newNode;
    NodeType* prevLoc;
    NodeType* location;

    newNode = new NodeType;
    newNode->info = item;

    bool moreToSearch;

    location = listData;
    prevLoc = nullptr;

    moreToSearch = (location != nullptr);

    while(moreToSearch){
        if(location->info < item){
            prevLoc = location;
            location = location->next;
            moreToSearch = (location != nullptr);
        }else{
            moreToSearch = false;
        }
    }

    if(prevLoc == nullptr){
        newNode->next = listData;
        listData = newNode;
    }else{
        newNode->next = location;
        prevLoc->next = newNode;
    }
    length++;
}

template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item){
    NodeType* location = listData;
    NodeType* tempLocation;

    if(item == listData->info){
        tempLocation = location;
        listData = listData->next;
    }else{
        while(!(item==(location->next)->info)){
            location = location->next;
        }
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template<class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
    NodeType* location = listData;
    bool moreToSearch = (location != nullptr);
    found = false;

    while(moreToSearch && !found){
        if(item == location->info){
            found = item;
        }else if(item > location->info){
            location = location->next;
            moreToSearch = (location != nullptr);
        }else{
            moreToSearch = false;
        }
    }
}

template<class ItemType>
void SortedType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;

    while(listData != nullptr){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template<class ItemType>
SortedType<ItemType>::~SortedType(){
    MakeEmpty();
}

template<class ItemType>
void SortedType<ItemType>::ResetList(){
    currentPos = nullptr;
}

template<class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item){
    if(currentPos == nullptr){
        currentPos = listData;
    }else{
        currentPos = currentPos->next;
    }
    item = currentPos->info;
}
