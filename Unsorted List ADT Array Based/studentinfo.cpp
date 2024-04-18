#include "studentinfo.h"
#include <cstring>

StudentInfo::StudentInfo() {
    id = 0;
    name = nullptr;
    cgpa = 0.0;
}

StudentInfo::StudentInfo(int i,char* n, double cg) {
    id = i;
    cgpa = cg;
    name = n;
}

int StudentInfo::GetId() {
    return id;
}

double StudentInfo::GetCGPA() {
    return cgpa;
}

char* StudentInfo::GetName() {
    return name;
}

bool StudentInfo::operator==(StudentInfo student2) {
    if(id == student2.id){
        return true;
    }
    return false;
}

bool StudentInfo::operator!=(StudentInfo student2) {
    if(id == student2.id){
        return false;
    }
    return true;
}
