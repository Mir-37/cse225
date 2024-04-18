#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> ll;

    // Insert at beginning
    ll.InsertAtBeginning(1);
    ll.InsertAtBeginning(2);
    ll.InsertAtBeginning(3);

    // Insert at end
    ll.InsertAtEnd(4);
    ll.InsertAtEnd(5);

    // Display the list
    cout << "The list : ";
    ll.Display();

    bool found = true;
    int x = 5;
    ll.RetrieveItem(x, found);

    // Search an item
    cout << "Is " << x << " present in the list? " << (found ? "Yes" : "No") << endl;

    // Delete from beginning
    ll.DeleteFromBeginning();
    cout << "The list after deleting from beginning: ";
    ll.Display();

    // Delete from end
    ll.DeleteFromEnd();
    cout << "The after deleting from end: ";
    ll.Display();

    cout << endl;
    return 0;
}
