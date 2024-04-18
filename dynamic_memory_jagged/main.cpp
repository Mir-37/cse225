#include <iostream>

using namespace std;

int main()
{
    /// take row
    int r;
    cin >> r;
    int **pt = new int*[r];
    int *sizes = new int[r];
    /// now take cols
    for(int k=0; k<r; k++){
        cin >> sizes[k];
        pt[k] = new int[sizes[k]];
        for(int f=0; f<sizes[k]; f++){
            cin >> pt[k][f];
        }
    }
    for(int k=0; k<r; k++){
        for(int f=0; f<sizes[k]; f++){
            cout << pt[k][f] << " ";
        }
        cout << endl;
    }
    for(int k=0; k<r; k++){
        delete[] pt[k];
    }
    delete[] pt;
    delete[] sizes;
    return 0;
}
