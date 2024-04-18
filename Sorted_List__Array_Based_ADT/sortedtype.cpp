#include <iostream>
#include "sortedtype.h"

using namespace std;

template <class ItemType>
/// Constructor
SortedType<ItemType>::SortedType()
{
    /// Set initial length to 0
    length = 0;
}

/// Get the length of the array
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
    return length;
}

/// Insert an Item sorted way
template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while (moreToSearch)
    {
        if (item > info[location])
        {
            location++;
            moreToSearch = (location < length);
        }
        else if (item < info[location])
            moreToSearch = false;
    }

    /// Shift elements to make space for the new item
    for (int index = length; index > location; index--)
    {
        /// Move each element one position to the right
        info[index] = info[index - 1];
    }
    /// Insert the item at the correct location
    info[location] = item;
    length++;
}

/// Delete an Item
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;

    /// Find the location of the item to be deleted
    while (item != info[location])
    {
        location++; // Move to the next location
    }

    /// Shift elements to remove the item
    for (int index = location + 1; index < length; index++)
    {
        /// Move each element one position to the left
        info[index - 1] = info[index];
    }

    length--;
}

/// Search for an Item
template <class ItemType>
void SortedType<ItemType>::SearchItem(ItemType &item, bool &found)
{
    /// Initialize variables for binary search
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;

    /// Perform binary search
    while (moreToSearch && !found)
    {
        /// Get the midpoint
        midPoint = (first + last) / 2;

        /// If the item is less than the item at the midpoint; Update the last index then check if there are more elements to search
        if (item < info[midPoint])
        {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        }
        /// If the item is greater than the item at the midpoint; Update the first index and Check if there are more elements to search
        else if (item > info[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        /// Item is found at the midpoint
        else
        {
            found = true;
            item = info[midPoint];
        }
    }
}
