#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

const MAX_STUDENTS = 5;

class StudentInfo{
private:
    string name;
    double cgpa;
    int id;
    int students[MAX_STUDENTS];
    int length;
    int currentPos;
public:
    StudentInfo();
    StudentInfo(int, string, double);
    void InsertRecord(int, string, double);
    void DeleteRecord(int);
    string RetrieveRecord(int);
    void PrintList();
    StudentInfo operator=(StudentInfo);
    StudentInfo operator>(StudentInfo);
    StudentInfo operator<(StudentInfo);
};

#endif // STUDENTINFO_H_INCLUDED
