#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

class StudentInfo {
private:
    int id;
    char* name;
    double cgpa;

public:
    StudentInfo();
    StudentInfo(int,char*, double);

    int GetId();
    double GetCGPA();
    char* GetName();
    bool operator==(StudentInfo);
    bool operator!=(StudentInfo);
};

#endif // STUDENTINFO_H_INCLUDED
