#include "timestamp.h"
#include <bits/stdc++.h>
using namespace std;

void TimeStamp::print()
{
    string xx = "";
    if (ss <= 9) {
        xx = "0" + to_string(ss);
    } else {
        xx = to_string(ss);
    }

    if (mm <= 9) {
        xx += ":0" + to_string(mm);
    } else {
        xx += ":" + to_string(mm);
    }

    if (hh <= 9) {
        xx += ":0" + to_string(hh);
    } else {
        xx += ":" + to_string(hh);
    }
    cout << xx << endl;
}

bool TimeStamp::operator>(TimeStamp st){
    if(ss>st.ss){
        return true;
    }
    return false;
}

bool TimeStamp::operator<(TimeStamp st){
    if(ss<st.ss){
        return true;
    }
    return false;
}

bool TimeStamp::operator==(TimeStamp st){
    if(ss == st.ss){
        return true;
    }
    return false;
}
/*
15 34 23
13 13 02
43 45 12
25 36 17
52 02 20
*/
