#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<row; i++){
        cout << "Enter column: ";
        cin >> sizes[i];
        cout << "Enter element: ";
        arr[i] = new llu[sizes[i]];
        for(llu j=0; j<sizes[i]; j++){
            cin >> arr[i][j];
        }
    }
}
