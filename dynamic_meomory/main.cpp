#include <iostream>

using namespace std;

int main()
{
    /// 1D array
    cout << "Dynamic memory allocation:" << endl;

    int *a = new int;
    float *b = new float;

    *a = 200;
    *b = 200.1;

    cout << a << " " << b << endl;
    cout << *a << " " << *b << endl; /// dereferncing

    delete a;
    delete b;

    cout << "Dynamic memory 1D array: " << endl;
    int sz; /// take size
    cin >> sz;
    int* k = new int[sz];
    for(int i=0; i<sz; i++){
        cin >> k[i];
    }
    for(int i=0; i<sz; i++){
        cout << k[i] << " ";
    }
    cout << endl;
    delete[] k;
    return 0;
}
