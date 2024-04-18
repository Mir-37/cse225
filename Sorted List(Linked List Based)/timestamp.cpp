#include <iostream>
#include "timestamp.h"

using namespace std;

TimeStamp::TimeStamp(){
    this->hh = 0;
    this->mm = 0;
    this->ss = 0;
}

TimeStamp::TimeStamp(int ss, int mm, int hh){
    this->ss = ss;
    this->mm = mm;
    this->hh = hh;
}

void TimeStamp::SetHour(int hour){
    this->hh = hour;
}
void TimeStamp::SetMin(int mm){
    this->mm = mm;
}
void TimeStamp::SetSecond(int ss){
    this->ss = ss;
}

void TimeStamp::printTimeStamp(){
    string x;
    string y;
    string z;
    if(hh<=9){
       x = "0" + to_string(hh);
    }else{
        x = to_string(hh);
    }
    if(mm<=9){
        y = "0" + to_string(mm);
    }else{
        y = to_string(mm);
    }
    if(ss<=9){
        z = "0" + to_string(ss);
    }else{
        z = to_string(ss);
    }
    cout << z << ":" << y << ":" << x << endl;
}

bool TimeStamp::operator>(TimeStamp stp) {
    if (hh > stp.hh) {
        return true;
    } else if (hh == stp.hh && mm > stp.mm) {
        return true;
    } else if (hh == stp.hh && mm == stp.mm && ss > stp.ss) {
        return true;
    }
    return false;
}

bool TimeStamp::operator<(TimeStamp stp) {
    // sorted by second
    if (ss < stp.ss) {
        return true;
    } else if (hh == stp.hh && mm < stp.mm) {
        return true;
    } else if (hh == stp.hh && mm == stp.mm && ss < stp.ss) {
        return true;
    }
    return false;
}

bool TimeStamp::operator==(TimeStamp stp) {
    return (hh == stp.hh && mm == stp.mm && ss == stp.ss);
}
bool TimeStamp::operator!=(TimeStamp stp) {
    return (hh != stp.hh && mm != stp.mm && ss != stp.ss);
}
