#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentinfo.h"

using namespace std;

int main() {
    UnsortedType<StudentInfo> list_of_student;

    StudentInfo students[] = {
        StudentInfo(15234, "Jon", 2.6),
        StudentInfo(13732, "Tyrion", 3.9),
        StudentInfo(13569, "Sandor", 1.2),
        StudentInfo(15467, "Ramsey 2", 3.1),
        StudentInfo(16285, "Arya", 3.1)
    };

    for (int i = 0; i < 5; i++) {
        list_of_student.InsertItem(students[i]);
    }
//    cout << "inserted" << endl;
    StudentInfo st_to_del(15467, "", 0.0);

    list_of_student.DeleteItem(st_to_del);
//    cout << "Deleted" << endl;

    list_of_student.ResetList();
    bool found = false;
    StudentInfo s(13569, "", 0.0);
    list_of_student.RetrieveItem(s, found);
    if (!found) {
        cout << "Item couldn't be found." << endl;
    }else{
        cout << "Item is found" << endl;
        cout << s.GetId() << ", " << s.GetName() << ", " << s.GetCGPA() << endl;
    }
    cout << "All Students" << endl;
    list_of_student.ResetList();
    StudentInfo temp(0, "", 0.0);
    for (int i = 0; i < list_of_student.LengthIs(); i++){
        list_of_student.GetNextItem(temp);
        cout << temp.GetId() << ", " << temp.GetName() << ", " << temp.GetCGPA() << endl;
    }

    return 0;
}
