#include <iostream>
#include "timestamp.h"
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    SortedType<TimeStamp> sst;

    sst.InsertItem(TimeStamp(15, 34, 23));
    sst.InsertItem(TimeStamp(13, 13, 2));
    sst.InsertItem(TimeStamp(43, 45, 12));
    sst.InsertItem(TimeStamp(25, 36, 17));
    sst.InsertItem(TimeStamp(52, 2, 20));

    TimeStamp ssd(25, 36, 17);
    sst.DeleteItem(ssd);

    TimeStamp current;
    sst.ResetList();
    for (int i = 0; i < sst.LengthIs(); ++i)
    {
        sst.GetNextItem(current);
        current.printTimeStamp();
    }

    return 0;
}
