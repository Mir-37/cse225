#include <iostream>
#include "dynArr.h"

using namespace std;

dynArr::dynArr(){
    data = NULL;
    rows = 0;
    cols = 0;
}
dynArr::dynArr(int r, int c){
    rows = r;
    cols = c;
    data = new int*[rows];
    sizes = new int[rows];
}
dynArr::~dynArr(){
    for(int i=0; i<rwos; i++){
        delete[] arr[i];
        delete[] sizes;
    }
    delete[] arr;
    delete[] sizes;
}
dynArr::getvalue(int row, int col){
    return data[row][col];
//    for(int i=0; i<rows; i++){
//        for(int j=0; j<sizes[i]; j++){
//            cout << arr[i][j] << endl;
//        }
//    }
}
void dynArr::setValue(int row, int col, int value) {
    sizes[row] = col;
    data[row][sizes[row]] = value;
}
void dynArr::allocate(int r, int c) {
    if (data != NULL) {
        for(int i=0; i<rwos; i++){
        delete[] arr[i];
        delete[] sizes;
    }
    delete[] arr;
    delete[] sizes;
    }
    rows = r;
    cols = c;
    data = new int*[rows];
    sizes = new int[rows];
}
