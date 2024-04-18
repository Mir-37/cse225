#include <iostream>
#include "studentinfo.h"

using namespace std;

/// Constructor
StudentInfo::StudentInfo() {
    id = 0;
    name = nullptr;
    cgpa = 0.0;
}
/// Constructor
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

/// Use Operator Overloading to compare id of two Student objects
bool StudentInfo::operator==(StudentInfo student2) {
    if(id == student2.id){
        return true;
    }
    return false;
}
/// Use Operator Overloading to compare id of two Student objects
bool StudentInfo::operator>(StudentInfo student2) {
    if(id > student2.id){
        return true;
    }
    return false;
}
/// Use Operator Overloading to compare id of two Student objects
bool StudentInfo::operator<(StudentInfo student2) {
    if(id < student2.id){
        return true;
    }
    return false;
}
/// Use Operator Overloading to compare id of two Student objects
bool StudentInfo::operator!=(StudentInfo student2) {
    if(id == student2.id){
        return false;
    }
    return true;
}
