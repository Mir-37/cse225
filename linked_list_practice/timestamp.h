#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class TimeStamp{
public:
    int ss, hh, mm;
    void print();
    bool operator>(TimeStamp);
    bool operator<(TimeStamp);
    bool operator==(TimeStamp);
};

#endif // TIMESTAMP_H_INCLUDED
