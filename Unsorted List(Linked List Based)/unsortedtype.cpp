#include <iostream>
#include "unsortedtype.h"
#define TEMPLATE template <class ItemType>
#define CLASS UnsortedType<ItemType>

using namespace std;

TEMPLATE
CLASS::UnsortedType()
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
void CLASS::InsertItem(ItemType item)
{
    NodeType* location;
    location = new NodeType;
    location->info = item;
    // Insert the new node at the beginning of the list
    location->next = listData;
    listData = location;
    // Increment the length of the list
    length++;
}

TEMPLATE
void CLASS::RetrieveItem(ItemType& item, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != nullptr);
    found = false;

     // Traverse the list until the end or until the item is found
    while(moreToSearch && !found)
    {
        // If the item matches, set found to true
        if(item == location->info)
        {
            found = true;
        }
        else
        {
            // Move to the next node and check if there are more nodes to search
            location = location->next;
            moreToSearch = (location != nullptr);
        }
    }
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

TEMPLATE
void CLASS::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    // If the item to be deleted is found at the beginning of the list
    if(item == listData->info){
        tempLocation = location;
        listData = listData->next; // Update the head pointer
    }else{
        // Traverse the list until the item before the one to be deleted is found
        while(!(item == (location->next)->info)){
            location = location->next;
        }
        // Store the node to be deleted in tempLocation and update pointers
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    // Delete the node and decrement the length of the list
    delete tempLocation;
    length--;
}

TEMPLATE
void CLASS::InsertAtBeginning(ItemType item)
{
    InsertItem(item);
}

// Function to insert an item at the end of the list
TEMPLATE
void CLASS::InsertAtEnd(ItemType item)
{
    NodeType* temp = listData;

    // Traverse to the end of the list
    while (temp != nullptr && temp->next != nullptr)
    {
        temp = temp->next;
    }
    // Add item at the end if the list is not empty, otherwise insert at the beginning
    if (temp != nullptr)
    {
        temp->next = new NodeType;
        temp->next->info = item;
        temp->next->next = nullptr;
    }
    else
    {
        InsertItem(item);
    }
}

TEMPLATE
void CLASS::Display()
{
    NodeType* temp = listData;
    // Traverse the list and print each item
    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

TEMPLATE
void CLASS::DeleteFromBeginning()
{
    // Check if the list is empty
    if (LengthIs() > 0)
    {
        ItemType item;
        // Get the first item in the list
        GetNextItem(item);
        // Delete the item from the list
        DeleteItem(item);
    }
    else
    {
        cout << "List is empty. Cannot delete from beginning." << endl;
    }
}

TEMPLATE
void CLASS::DeleteFromEnd()
{
     // Check if the list is empty
    if (LengthIs() > 0)
    {
        NodeType* temp = listData;
        NodeType* prev = nullptr;

        // Traverse to the end of the list
        while (temp->next != nullptr)
        {
            prev = temp;
            temp = temp->next;
        }

         // Delete the last item and adjust pointers accordingly
        if (prev != nullptr)
        {
            delete temp;
            prev->next = nullptr;
        }
        else
        {
            listData = nullptr;
        }
        length--;
    }
    else
    {
        cout << "List is empty. Cannot delete from end." << endl;
    }
}
