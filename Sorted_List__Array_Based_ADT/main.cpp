#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "studentinfo.h"

using namespace std;

int main()
{
    ///    Create an instance of SortedType class
    SortedType<int> list_of_arr;

    int arr[] = {123, 893, 22, 190, 45};

    ///     Insert objects of students
    for (int i = 0; i < 5; i++)
    {
        list_of_arr.InsertItem(arr[i]);
    }

    ///     Delete a student with id 15467
    int val_To_del = 190;
    list_of_arr.DeleteItem(val_To_del);
    cout << "Deleted value" << val_To_del << endl;

    ///     Search a student with id 13569
    bool found = false;
    int val_to_Search = 190;
    cout << "Search value 190" << endl;
    list_of_arr.SearchItem(val_to_Search, found);
    if (!found)
    {
        cout << "Item couldn't be found." << endl;
    }
    else
    {
        cout << "Item is found" << endl;
        cout << val_to_Search << endl;
    }
    /*

    ///    Create an instance of SortedType class
    SortedType<StudentInfo> list_of_student;

    ///     Create an array of student objects
    StudentInfo students[] =
    {
        StudentInfo(15234, "John", 2.6),
        StudentInfo(13732, "Tyson", 3.9),
        StudentInfo(13569, "Mike", 1.2),
        StudentInfo(15467, "Rambo 2", 3.1),
        StudentInfo(16285, "Ariel", 3.1)
    };

    ///     Insert objects of students
    for (int i = 0; i < 5; i++)
    {
        list_of_student.InsertItem(students[i]);
    }

    ///     Delete a student with id 15467
    StudentInfo st_to_del(15467, "", 0.0);
    list_of_student.DeleteItem(st_to_del);

    ///     Search a student with id 13569
    bool found = false;
    StudentInfo s(13569, "", 0.0);
    list_of_student.SearchItem(s, found);
    if (!found)
    {
        cout << "Student couldn't be found." << endl;
    }
    else
    {
        cout << "Student is found" << endl;
        cout << s.GetId() << ", " << s.GetName() << ", " << s.GetCGPA() << endl;
    }
    */
    return 0;
}
