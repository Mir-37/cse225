#include <iostream>
#include "linkedlist.h"
#include "linkedlist.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    SortedType<TimeStamp> tt;
    TimeStamp a[5];
    for(int i=0; i<5; i++){
        cin >> a[i].ss >> a[i].mm >> a[i].hh;
        tt.InsertItem(a[i]);
    }
    TimeStamp t;
    for(int i=0; i<5; i++){
        tt.GetNextItem(t);
        t.print();
    }
    tt.ResetList();
    TimeStamp f;
    f.ss = 25;
    f.mm = 36;
    f.hh = 17;
    tt.DeleteItem(f);
    for(int i=0; i<5; i++){
        tt.GetNextItem(t);
        t.print();
    }

    tt.~SortedType();
    return 0;
}
