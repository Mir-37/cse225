#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp{
private:
    int ss;
    int mm;
    int hh;
public:
    TimeStamp(int, int, int);
    TimeStamp();
    void SetHour(int);
    void SetMin(int);
    void SetSecond(int);
    void printTimeStamp();
    bool operator>(TimeStamp);
    bool operator<(TimeStamp);
    bool operator==(TimeStamp);
    bool operator!=(TimeStamp);
};

#endif // TIMESTAMP_H_INCLUDED
